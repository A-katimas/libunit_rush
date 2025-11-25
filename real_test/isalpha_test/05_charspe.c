/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_charspe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:51 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 17:45:45 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	test_isalpha5(void)
{
	int		value;
	char	chien;

	value = 0;
	chien = '@';
	value = ft_isalpha(chien);
	if (value == 0)
		return (0);
	else
		return (-1);
}