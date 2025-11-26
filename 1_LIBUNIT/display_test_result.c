/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_test_result.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:44:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:35:16 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../resource/terminal_colors.h"

static
void	ft_putstr_fd_colored(char *s, int fd, char *color)
{
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(TERMINAL_RESET, fd);
}

static
void	signal_print(int signal)
{
	if (signal == TEST_SIGSEGV)
		ft_putstr_fd_colored("SIGSEGV", 1, TERMINAL_UNDER_RED);
	else if (signal == TEST_SIGBUS)
		ft_putstr_fd_colored("SIGBUS", 1, TERMINAL_UNDER_YELLOW);
	else if (signal == TEST_SIGABRT)
		ft_putstr_fd_colored("SIGABRT", 1, TERMINAL_UNDER_MAGENTA);
	else if (signal == TEST_SIGFPE)
		ft_putstr_fd_colored("SIGFPE", 1, TERMINAL_UNDER_CYAN);
	else if (signal == TEST_SIGILL)
		ft_putstr_fd_colored("SIGILL", 1, TERMINAL_UNDER_BLUE);
	else if (signal == TEST_SIGPIPE)
		ft_putstr_fd_colored("SIGPIPE", 1, TERMINAL_UNDER_GREEN);
	else if (signal == TEST_SUCCESS)
		ft_putstr_fd_colored("SUCCESS", 1, TERMINAL_UNDER_GREEN);
	else if (signal == TEST_FAILURE)
		ft_putstr_fd_colored("FAILURE", 1, TERMINAL_UNDER_RED);
	else
		ft_putstr_fd_colored("Unknown signal", 1, TERMINAL_UNDER_WHITE);
}

static
void	signal_report(int signal, int expected)
{
	if (signal == expected)
		ft_putstr_fd_colored("OK", 1, TERMINAL_BOLD_GREEN);
	else
		ft_putstr_fd_colored("KO", 1, TERMINAL_BOLD_RED);
	ft_printf(" (expected: ");
	signal_print(expected);
	ft_printf(", got: ");
	signal_print(signal);
	ft_printf(")\n");
}

/*
	Displays the results of the executed tests.
	@return 0 if all tests passed, or -1 otherwise.
*/
int	display_test_result(t_unit_test **test_list)
{
	t_unit_test	*temp;
	int			total_tests;
	int			passed_tests;

	temp = *test_list;
	total_tests = 0;
	passed_tests = 0;
	while (temp)
	{
		total_tests++;
		if (temp->signal == 0)
			passed_tests++;
		ft_printf("%s: ", temp->name);
		signal_report(temp->signal, temp->expected);
		temp = temp->next;
	}
	ft_printf("Passed %d out of %d tests.\n", passed_tests, total_tests);
	if (passed_tests != total_tests)
		return (-1);
	else
		return (0);
}
