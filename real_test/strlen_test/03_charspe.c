/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_charspe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:12:35 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:50:37 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	teststrlen4(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = " \n\tquatre";
	value = ft_strlen(chien);
	if (value == 9)
		return (0);
	else
		return (-1);
}
