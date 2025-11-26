/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segfault.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:10:51 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:37:25 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static
int	segfault_test(void)
{
	int	*ptr;
	int	x;

	ptr = NULL;
	x = *ptr;
	(void)x;
	return (0);
}

int	segfault_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "SEGFAULT: test 1", &segfault_test, TEST_SIGSEGV);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
