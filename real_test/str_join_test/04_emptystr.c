/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_emptystr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:53:49 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_strjoin4()
{
	int		value;
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;

	value = 0;
	chien = "";
	chat = "la";
	rep = "la";
	chienchatla = ft_strjoin(chien, chat);
	if (chienchatla == rep)
		return (0);
	else
		return (-1);
}