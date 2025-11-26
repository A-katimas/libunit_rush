/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:45:36 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:55:21 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_atoi5(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = "       +69";
	value = ft_atoi(chien);
	if (value == 69)
		return (0);
	else
		return (-1);
}
