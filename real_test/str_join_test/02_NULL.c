/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_NULL.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:36 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:57:14 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_strjoin2(void)
{
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	rep = "wouf";
	chien = "wouf";
	chat = NULL;
	chienchatla = ft_strjoin(chien, chat);
	if (chienchatla == rep)
		return (0);
	else
		return (-1);
}
