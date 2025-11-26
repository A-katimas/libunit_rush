/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:50:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:33:52 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <sys/wait.h>
# include <sys/types.h>
# include "../resource/libft.h"
# include <signal.h>

# define SIGNAL_EXIT_OFFSET 128

enum e_test_status
{
	TEST_SUCCESS = 0,
	TEST_FAILURE = 255,
	TEST_SIGSEGV = SIGNAL_EXIT_OFFSET + SIGSEGV,
	TEST_SIGBUS = SIGNAL_EXIT_OFFSET + SIGBUS,
	TEST_SIGABRT = SIGNAL_EXIT_OFFSET + SIGABRT,
	TEST_SIGFPE = SIGNAL_EXIT_OFFSET + SIGFPE,
	TEST_SIGILL = SIGNAL_EXIT_OFFSET + SIGILL,
	TEST_SIGPIPE = SIGNAL_EXIT_OFFSET + SIGPIPE
};

typedef struct t_unit_test
{
	char				*name;
	struct t_unit_test	*next;
	int					(*test_func)(void);
	int					signal;
	int					expected;
	t_allocs			*allocs;
}	t_unit_test;

void	load_test(t_unit_test **test_list,\
							char *name,	int (*test_func)(void), int expected);

void	launch_tests(t_unit_test **test_list);
int		display_test_result(t_unit_test **test_list);
void	cleanup_test_list(t_unit_test **test_list);

#endif