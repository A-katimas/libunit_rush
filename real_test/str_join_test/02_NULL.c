/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_NULL.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:36 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:54:23 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_strjoin2(void)
{
	int		value;
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	rep = "wouf";
	value = 0;
	chien = "wouf";
	chienchatla = ft_strjoin(chien, chat);
	if (chienchatla == rep)
		return (0);
	else
		return (-1);
}