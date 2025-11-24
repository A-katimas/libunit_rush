/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:01:49 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/24 17:22:31 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
	Initializes the test list.
*/
t_unit_test	*init_test_list(void)
{
	t_unit_test	*test_list;
	t_allocs	*allocs;

	test_list = NULL;
	allocs = NULL;
	test_list = (t_unit_test *)malloc(sizeof(t_unit_test));
	mhandler_check(&allocs, test_list, init_test_list);
	test_list->name = NULL;
	test_list->next = NULL;
	test_list->test_func = NULL;
	test_list->signal = 0;
	test_list->allocs = allocs;
	return (test_list);
}

/*
	Adds a new test to the end of the test list.
	Keeps track of allocated memory using mhandler.
*/
void	load_test(t_unit_test **test_list, char *name, void (*test_func)(void))
{
	t_unit_test	*temp;

	if (!test_list)
		test_list = init_test_list();
	temp = *test_list;
	while (temp->next)
		temp = temp->next;
	temp->next = (t_unit_test *)malloc(sizeof(t_unit_test));
	mhandler_check(&temp->allocs, temp->next, load_test);
	temp->next->name = name;
	temp->next->test_func = test_func;
	temp->next->next = NULL;
	temp->next->signal = 0;
	temp->next->allocs = &(*test_list)->allocs;
}
