/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:50:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/24 20:48:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../resource/libft.h"

# define SIGNAL_EXIT_OFFSET 128

typedef struct t_unit_test
{
	char				*name;
	struct t_unit_test	*next;
	int					(*test_func)(void);
	int					signal;
	t_allocs			*allocs;
}	t_unit_test;

void	load_test(t_unit_test **test_list, char *name, int (*test_func)(void));
void	launch_tests(t_unit_test **test_list);
void	display_test_result(t_unit_test **test_list);
void	cleanup_test_list(t_unit_test **test_list);

#endif