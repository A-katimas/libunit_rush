/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bus_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:04:34 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:56:53 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#include <stdint.h>
#include <stdlib.h>

static
int	buserror_test(void)
{
	char			*p;
	volatile int	*misaligned;

	p = malloc(sizeof(int) + 1);
	if (p)
	{
		misaligned = (volatile int *)(p + 1);
		*misaligned = 42;
	}
	return (0);
}

int	bus_error_launcher(void)
{
	t_unit_test	*test_list;
	int			return_value;

	test_list = NULL;
	load_test(&test_list, "BUSERROR: test 1", &buserror_test, TEST_SIGBUS);
	launch_tests(&test_list);
	return_value = display_test_result(&test_list);
	cleanup_test_list(&test_list);
	return (return_value);
}
