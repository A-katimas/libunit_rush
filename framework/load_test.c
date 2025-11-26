/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:01:49 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 10:58:44 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
	Initializes the test list.
*/
t_unit_test	*init_test_list(char *name, int (*test_func)(void), int expected)
{
	t_unit_test	*test_list;
	t_allocs	*allocs;

	test_list = NULL;
	allocs = NULL;
	test_list = (t_unit_test *)malloc(sizeof(t_unit_test));
	mhandler_check(&allocs, test_list, init_test_list);
	test_list->name = name;
	test_list->next = NULL;
	test_list->test_func = test_func;
	test_list->signal = 0;
	test_list->expected = expected;
	test_list->allocs = allocs;
	return (test_list);
}

/*
	Adds a new test to the end of the test list.
	Keeps track of allocated memory using mhandler.
*/
void	load_test(t_unit_test **test_list, char *name,\
										int (*test_func)(void), int expected)
{
	t_unit_test	*temp;
	t_unit_test	*new_test;

	if (!(*test_list))
		(*test_list) = init_test_list(name, test_func, expected);
	else
	{
		temp = *test_list;
		while (temp->next)
			temp = temp->next;
		new_test = (t_unit_test *)ft_calloc(1, sizeof(t_unit_test));
		mhandler_check(&(*test_list)->allocs, new_test, load_test);
		new_test->name = name;
		new_test->test_func = test_func;
		new_test->signal = 0;
		new_test->expected = expected;
		new_test->next = NULL;
		temp->next = new_test;
	}
}
