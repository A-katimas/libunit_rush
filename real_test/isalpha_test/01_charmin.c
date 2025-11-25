/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_charmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:44:15 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_isalpha1(void)
{
	char	chien;
	int		value;

	value = 0;
	chien = 'w';
	value = ft_isalpha(chien);
	if (value == 1)
		return (0);
	else
		return (-1);
}