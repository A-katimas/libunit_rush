/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_charmaj.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 15:27:02 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_isalpha2()
{
	int value;

	value = 0;
	char chien;
	chien = 'Q';
	value = ft_isalpha(chien);

	if(value == 1)
		return (0);
	else
		return (-1);
}