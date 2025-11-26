/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ko.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:16:02 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:37:39 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static
int	ko(void)
{
	if (1 == 0)
		return (0);
	else
		return (-1);
}

int	ko_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "KO: test 1", &ko, TEST_FAILURE);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
