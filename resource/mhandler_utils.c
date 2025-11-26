/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mhandler_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:05:44 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 09:56:57 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mhandler.h"

static void	ft_free_2d(void **array)
{
	int		index;

	if (!array)
		return ;
	index = 0;
	while (array && array[index])
	{
		free(array[index]);
		index++;
	}
	free(array);
}

/*
  Free the allocated memory.
*/
static void	mhandler_free_1d_or_2d(t_allocs *allocs)
{
	if (allocs->is_2d)
	{
		if (allocs->content_2d)
			ft_free_2d(allocs->content_2d);
	}
	else
		if (allocs->content)
			free(allocs->content);
}

/*
  Free all elements in the list of allocated elements.
*/
void	mhandler_free_all(t_allocs **allocs)
{
	t_allocs	*temp;

	while (*allocs)
	{
		temp = (*allocs)->next;
		mhandler_free_1d_or_2d(*allocs);
		(*allocs)->content = NULL;
		free(*allocs);
		*allocs = temp;
	}
}

void	mhandler_free_by_func_ptr(void *func_ptr, t_allocs **allocs)
{
	t_allocs	*temp;
	t_allocs	*prev;

	temp = *allocs;
	prev = NULL;
	while (temp)
	{
		if (temp->func_ptr == func_ptr)
			break ;
		prev = temp;
		temp = temp->next;
	}
	if (temp && !prev)
	{
		*allocs = temp->next;
		mhandler_free_1d_or_2d(temp);
		free(temp);
	}
	else if (temp)
	{
		prev->next = temp->next;
		mhandler_free_1d_or_2d(temp);
		free(temp);
	}
}
