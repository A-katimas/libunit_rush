/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:18:47 by vsyutkin          #+#    #+#             */
/*   Updated: 2025/11/26 11:27:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	int	return_value;

	return_value = 0;
	return_value |= ok_launcher();
	return_value |= ko_launcher();
	return_value |= segfault_launcher();
	return_value |= bus_error_launcher();
	return (return_value);
}
