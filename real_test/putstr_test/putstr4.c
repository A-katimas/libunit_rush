/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:54:40 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 21:34:12 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int test_putstr4()
{
	int value;

	value = 0;
	char *chien;
	chien = "";
	value = ft_putstr_fd(chien,1);

	if(value == 4)
		return (0);
	else
		return (-1);

}