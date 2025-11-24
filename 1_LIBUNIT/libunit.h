/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:50:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/24 18:14:51 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "resource/libft.h"

# define SIGNAL_EXIT_OFFSET 128

/**
 * @struct t_unit_test
 * @brief Node representing a single unit test in a singly linked list.
 *
 * This structure is used to assemble a test suite as a linked list of tests.
 * Each node stores a descriptive name, a pointer to the next test node, and
 * a pointer to the function that implements the test.
 *
 * @var char *name <- please use "[test_function]:[test_name]" format
 * Human-readable, null-terminated string describing the test. Ownership and
 * lifetime are managed by the caller (e.g., a static string or dynamically
 * allocated string that must remain valid while the test list is used).
 *
 * @var t_unit_test *next
 * Pointer to the next test node in the list, or nullptr if this is the last
 * node in the suite.
 *
 * @var void (*test_func)(void)
 * Pointer to the test function. The function takes no arguments and returns
 * void; it should perform the test's checks and report results through the
 * surrounding test framework's mechanisms.
 */
typedef struct t_unit_test
{
	char		*name;
	t_unit_test	*next;
	int			(*test_func)(void);
	int			signal;
	t_allocs	*allocs;
}	t_unit_test;

void	load_test(t_unit_test **test_list, char *name, void (*test_func)(void));
void	launch_tests(t_unit_test **test_list);
void	display_test_result(t_unit_test **test_list);
void	cleanup_test_list(t_unit_test **test_list);

#endif