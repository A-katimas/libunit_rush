/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00intmax.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:12:35 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 14:40:18 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_atoi1()
{
	int		value;
	char	*chien;

	value = 0;
	chien = "2147483647";
	value = ft_atoi(chien);

	if(value == INT_MAX)
		return (0);
	else
	return (-1);
}
