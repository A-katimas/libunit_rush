/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:41:13 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 09:32:04 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	strlen_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "STRLEN: test 1", &teststrlen1, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 2", &teststrlen2, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 3", &teststrlen3, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 4", &teststrlen4, TEST_SUCCESS);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
