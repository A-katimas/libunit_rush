/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:17:53 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:37:36 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static
int	ok(void)
{
	if (1 == 1)
		return (0);
	else
		return (-1);
}

int	ok_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "OK: test 1", &ok, TEST_SUCCESS);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
