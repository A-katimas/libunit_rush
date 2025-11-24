/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_test_result.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:44:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/24 17:59:04 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "terminal_colors.h"
#include <signal.h>

static
void	ft_putstr_fd_colored(char *s, int fd, char *color)
{
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(TERMINAL_RESET, fd);
	ft_putendl_fd("", fd);
}

static
void	signal_report(int signal)
{
	if (signal == SIGSEGV)
		ft_putstr_fd_colored("SIGSEGV", 1, TERMINAL_RED);
	else if (signal == SIGBUS)
		ft_putstr_fd_colored("SIGBUS", 1, TERMINAL_YELLOW);
	else if (signal == SIGABRT)
		ft_putstr_fd_colored("SIGABRT", 1, TERMINAL_MAGENTA);
	else if (signal == SIGFPE)
		ft_putstr_fd_colored("SIGFPE", 1, TERMINAL_CYAN);
	else if (signal == SIGILL)
		ft_putstr_fd_colored("SIGILL", 1, TERMINAL_BLUE);
	else if (signal == SIGPIPE)
		ft_putstr_fd_colored("SIGPIPE", 1, TERMINAL_GREEN);
	else if (signal == 0)
		ft_putstr_fd_colored("OK", 1, TERMINAL_BOLD_GREEN);
	else
		ft_putstr_fd_colored("Unknown signal", 1, TERMINAL_WHITE);
}

/*
	Displays the results of the executed tests.
*/
void	display_test_result(t_unit_test **test_list)
{
	t_unit_test	*temp;
	int			total_tests;
	int			passed_tests;

	temp = *test_list;
	total_tests = 0;
	passed_tests = 0;
	while (temp->next)
	{
		total_tests++;
		if (temp->next->signal == 0)
			passed_tests++;
		ft_printf("%s: ", temp->next->name);
		signal_report(temp->next->signal);
		temp = temp->next;
	}
	ft_printf("Passed %d out of %d tests.\n", passed_tests, total_tests);
}
