/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:41:13 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 13:16:49 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	strjoin_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "STRJOIN: test 1", &test_strjoin1, TEST_SUCCESS);
	load_test(&test_list, "STRJOIN: test 2", &test_strjoin3, TEST_SUCCESS);
	load_test(&test_list, "STRJOIN: test 3", &test_strjoin4, TEST_SUCCESS);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
