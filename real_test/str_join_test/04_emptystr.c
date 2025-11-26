/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_emptystr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:58:06 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_strjoin4(void)
{
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	chien = "";
	chat = "la";
	rep = "la";
	chienchatla = ft_strjoin(chien, chat);
	if (chienchatla == rep)
		return (0);
	else
		return (-1);
}
