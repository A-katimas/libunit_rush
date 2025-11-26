/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strempty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 21:23:40 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 13:15:16 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_strjoin3(void)
{
	char	*chien;
	char	*chat;
	char	*chienchatla;
	char	*rep;
	int		result;

	rep = "wouf";
	chien = "wouf";
	chat = "";
	chienchatla = ft_strjoin(chien, chat);
	result = ft_strncmp(chienchatla, rep, ft_strlen(rep));
	if (!result)
		return (0);
	else
		return (-1);
}
