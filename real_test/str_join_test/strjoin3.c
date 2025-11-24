/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:40 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 21:36:31 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_strjoin3()
{
	int		value;
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;
	rep = "wouf";
	value = 0;
	chien = "wouf";
	chat = "";
	chienchatla = ft_strjoin(chien,chat);
	if(chienchatla == rep)
		return (0);
	else
		return (-1);
}