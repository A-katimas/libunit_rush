/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:45:36 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 20:50:27 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_atoi5()
{
	int		value;
	char	*chien;

	value = 0;
	chien = "       +69";
	value = ft_atoi(chien);

	if(value == 69)
		return (0);
	else
		return (-1);
}