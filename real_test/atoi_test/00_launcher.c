/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:41:13 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/25 15:00:15 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	strlen_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	load_test(&test_list, "STRLEN: test 1", &test_atoi1, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 2", &test_atoi2, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 3", &test_atoi3, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 4", &test_atoi4, TEST_SUCCESS);
	load_test(&test_list, "STRLEN: test 4", &test_atoi5, TEST_SUCCESS);

	launch_tests(&test_list);
	display_test_result(&test_list);
	cleanup_test_list(&test_list);
}
