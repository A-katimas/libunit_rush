/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:53:16 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:58:42 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_putstr1(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = "wouf";
	value = ft_putstr_fd(chien, 1);
	if (value == 4)
		return (0);
	else
		return (-1);
}
