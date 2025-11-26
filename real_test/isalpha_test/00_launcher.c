/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:41:13 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 09:11:32 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	isalpha_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "ISALPHA: test 1", &test_isalpha1, TEST_SUCCESS);
	load_test(&test_list, "ISALPHA: test 2", &test_isalpha2, TEST_SUCCESS);
	load_test(&test_list, "ISALPHA: test 3", &test_isalpha3, TEST_SUCCESS);
	load_test(&test_list, "ISALPHA: test 4", &test_isalpha4, TEST_SUCCESS);
	load_test(&test_list, "ISALPHA: test 4", &test_isalpha5, TEST_SUCCESS);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
