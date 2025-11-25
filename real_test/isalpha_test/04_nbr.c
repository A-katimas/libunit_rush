/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 15:27:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_isalpha4()
{
	int value;

	value = 0;
	char chien;
	chien = '3';
	value = ft_isalpha(chien);

	if(value == 0)
		return (0);
	else
		return (-1);
}