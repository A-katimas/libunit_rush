/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_NULL.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:12:35 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:50:12 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	teststrlen3(void)
{
	int		value;
	char	*chien;

	value = 0;
	chien = NULL;
	value = ft_strlen(chien);
	if (value == -1)
		return (0);
	else
		return (-1);
}
