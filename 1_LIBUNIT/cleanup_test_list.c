/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup_test_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:00:35 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/24 21:02:23 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
	Cleans up the test list by freeing all allocated memory.
*/
void	cleanup_test_list(t_unit_test **test_list)
{
	mhandler_free_all(&(*test_list)->allocs);
}
