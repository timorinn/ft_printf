/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:16:12 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 13:07:03 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int		main(void)
{

	ft_printf("%++---00 d\n");
	
	// MY C
	/*
	   printf("|||%c|\n", 'a');
	ft_printf("|%c|\n", 'a');
	   printf("|%.c|\n", 'a');
	ft_printf("|%..c|\n", 'a');
	   printf("|%5c|\n", 'a');
	ft_printf("|%5c|\n", 'a');
	   printf("|%10.c|\n", 'a');
	ft_printf("|%10.c|\n", 'a');
	   printf("|%10c|\n", 48);
	ft_printf("|%10c|\n", 48);
	   printf("|%*c|\n", 12, 48);
	ft_printf("|%*c|\n", 12, 48);
	   printf("|%-*c|\n", 12, 48);
	ft_printf("|%-*c|\n", 12, 48);
	*/

	// MY S
	/*
	   printf("%10.s\n", "str");
	ft_printf("%s\n", "str");
	   printf("%10.2s\n", "str");
	ft_printf("%s\n", "str");
	   printf("%10.5s\n", "str");
	ft_printf("%s\n", "str");
	*/
	
	//ft_printf("%dd\n");
	//printf("%%da\n");
	//ft_printf("%*.*dd\n", 7, 8);
	//printf("%*.*dd\n", 7, 8, 9);
	//ft_printf("%7.*dd\n", 7, 8);
	/*
	printf(" 1) %F\n", 3.5);
	printf(" 2) %f\n", 3.5);
	printf(" 3) %e\n", 35735.7235);
	printf(" 4) %E\n", 35735.7235);
	printf(" 5) %g\n", 35735.7235);
	printf(" 6) %G\n", 35735.7235);
	printf(" 7) %hd\n", (short)45);
	printf(" 8) %o %O\n", 10, 10); // 8-a9
	printf(" 9) %x\n", 15); // 16-a9
	printf("10) %X\n", 15);
	printf("11) %u\n", 123);
	printf("12) %u\n", -123);
	printf("13) %u\n", -122);
	printf("14) %p\n", &n);
	printf("1) %2$ -*1$.*1$d\n", 6, 7);
	printf("2) %2$ -*1$.*1$d\n", 6, -7);
	printf("3) %2$ -*1$.*1$d\n", -6, 7);
	printf("4) %2$ -*1$.*1$d\n", 0, 7);
	printf("5) %2$-*1$.*1$d\n", 6, 7);
	printf("6) %2$ -*1$.8d\n", 6, 7);
	printf("7) %2$ -8.*1$d\n", 6, 7);
	printf("8) %2$d %1$d\n", 5, 10);
	//ft_printf("%10.\n", 123);
	
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