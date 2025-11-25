/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:22:01 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/25 15:25:08 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H


# include "../resource/libft.h"
# include "../1_LIBUNIT/libunit.h"

int	teststrlen1(void);
int	teststrlen2(void);
int	teststrlen3(void);
int	teststrlen4(void);

int	test_atoi1(void);
int	test_atoi2(void);
int	test_atoi3(void);
int	test_atoi4(void);
int	test_atoi5(void);

int test_putstr1(void);
int test_putstr2(void);
int test_putstr3(void);
int test_putstr4(void);

int test_strjoin1(void);
int test_strjoin2(void);
int test_strjoin3(void);
int test_strjoin4(void);

int test_isalpha1(void);
int test_isalpha2(void);
int test_isalpha3(void);
int test_isalpha4(void);
int test_isalpha5(void);


void	strlen_launcher(void);

#endif