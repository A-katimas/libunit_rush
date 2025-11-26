/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:54:34 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_isalpha4(void)
{
	int		value;
	char	chien;

	value = 0;
	chien = '3';
	value = ft_isalpha(chien);
	if (value == 0)
		return (0);
	else
		return (-1);
}
