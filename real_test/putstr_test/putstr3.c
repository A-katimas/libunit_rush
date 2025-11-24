/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:54:37 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 21:34:16 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_putstr3()
{
	int value;

	value = 0;
	char *chien;
	chien = "woufla\n";
	value = ft_putstr_fd(chien,1);

	if(value == 4)
		return (0);
	else
		return (-1);
}