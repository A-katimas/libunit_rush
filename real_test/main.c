/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:26 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/24 20:25:59 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(int ac,char **av)
{
	int a= 0;
	ft_printf("argu %d str %s \n",ac,av[1]);
	a = teststrlen1();
	if (!a)
		ft_printf("yes");
	else
		ft_printf("nan0");
}