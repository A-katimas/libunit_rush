/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:12:35 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:48:33 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_atoi3(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = "";
	value = ft_atoi(chien);
	if (value == 0)
		return (0);
	else
		return (-1);
}
