/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:16:12 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 22:08:29 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	//ft_printf("my printf |%-+-##  0 -+*d\n", 12);
	//ft_printf("%-- -  -   + + +  -  - ########## 0000000000000000010.12\n", 123);
	//printf("%----++--10.12d\n", 123);
	ft_printf("%*.*tr\n", 9, 123);
	printf("%2$.*2$d %1$d\n", 6, 7);
	//printf("%1$d %2$.*3$d %4$.*3$d\n", 5, 6, 7, 8);
	//ft_printf("%10.\n", 123);
	/*
	// D D D
	printf("D01)% 10d\n", 123);
	printf("D02)%10d\n", -123);
	printf("D03)% -            10d\n", 123);
	printf("D04)%+10.1d\n", 123);
	printf("D05)%+10.4d\n", 123);
	printf("D06)%+10.1d\n", 123);
	printf("D07)%+10.6d\n", 123);
	printf("D08)%-10.6d\n", 123);
	printf("D09)%+++10.1d\n", 123);
	printf("D10)%++++--10.1d\n", 123);
	printf("D11)%0d\n", 123);
	printf("D12)%0d\n", 1234);
	printf("D13)%1d\n", 1234);
	ft_printf("\n");


	// C C C
	printf("C01)%c\n", 'a');
	printf("C01)%1c\n", 'a');
	printf("C02)%10c\n", 'a');
	printf("C03)%-10c\n", 'a');
	*/
	return (0);
}