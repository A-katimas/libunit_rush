/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_normal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:15 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:58:21 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_strjoin1(void)
{
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	rep = "wouflala";
	chien = "woufla";
	chat = "la";
	chienchatla = ft_strjoin(chien, chat);
	if (chienchatla == rep)
		return (0);
	else
		return (-1);
}
