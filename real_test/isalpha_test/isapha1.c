/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isapha1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 14:40:03 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int test_putstr2()
{
	int value;

	value = 0;
	char *chien;
	chien = "wouf\t";
	value = ft_putstr_fd(chien,1);

	if(value == 4)
		return (0);
	else
		return (-1);
}