/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:18:26 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/26 09:53:49 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int	return_value;

	return_value = 0;
	return_value |= atoi_launcher();
	return_value |= isalpha_launcher();
	return_value |= strjoin_launcher();
	return_value |= strlen_launcher();
	return (return_value);
}

/*
|= is OR (binary).

0 OR 0     = 0
0 OR -1    = -1
-1 OR 0    = -1
-1 OR -1   = -1
*/