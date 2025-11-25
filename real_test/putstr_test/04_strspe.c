/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strspe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:54:37 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:47:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_putstr3(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = "woufla\n";
	value = ft_putstr_fd(chien, 1);
	if (value == 4)
		return (0);
	else
		return (-1);
}