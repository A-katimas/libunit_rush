/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:22:59 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/25 14:27:29 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
	Executes a test in the forked process and captures its exit status
	in the same struct t_unit_test.
*/
void	launch_tests(t_unit_test **test_list)
{
	t_unit_test	*temp;
	int			status;
	pid_t		pid;

	temp = *test_list;
	while (temp)
	{
		temp->signal = 0;
		if (temp->test_func)
		{
			pid = fork();
			if (pid == 0)
				_exit((temp->test_func()));
			else
			{
				waitpid(pid, &status, 0);
				if (WIFEXITED(status))
					temp->signal = WEXITSTATUS(status);
				else if (WIFSIGNALED(status))
					temp->signal = WTERMSIG(status) + SIGNAL_EXIT_OFFSET;
			}
		}
		temp = temp->next;
	}
}
