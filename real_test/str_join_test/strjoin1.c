/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:15 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 21:39:57 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_strjoin1()
{
	int		value;
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	rep = "wouflala";
	value = 0;
	chien = "woufla";
	chat = "la";
	chienchatla = ft_strjoin(chien,chat);
	if(chienchatla == rep)
		return (0);
	else
		return (-1);
}