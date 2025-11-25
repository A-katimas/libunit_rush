/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_intmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:12:35 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:48:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_atoi2(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = "-2147483648";
	value = ft_atoi(chien);
	if (value == INT_MIN)
		return (0);
	else
		return (-1);
}
