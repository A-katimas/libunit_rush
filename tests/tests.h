/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:18:59 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 10:20:13 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../1_LIBUNIT/libunit.h"

int	ko_launcher(void);
int	ok_launcher(void);
int	segfault_launcher(void);
int	bus_error_launcher(void);

#endif