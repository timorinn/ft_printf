/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:16:12 by bford             #+#    #+#             */
/*   Updated: 2019/10/06 10:08:10 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include "ft_printf.h"
//#include "libft.h"
#include <stdio.h>

int		main(void)
{
	/*
	printf(" num1 = %d\n", printf("{%f}", 1.0));
	printf(" num1 = %d\n\n", ft_printf("{%f}", 1.0));

	printf(" num2 = %d\n", printf("{%f}", 573.924));
	printf(" num2 = %d\n\n", ft_printf("{%f}", 573.924));

	
	printf(" num3 = %d\n", printf("{%f}", 43.99));
	printf(" num3 = %d\n\n", ft_printf("{%f}", 43.99));
	
	printf(" num4 = %d\n", printf("{%f}", -0.000001));
	printf(" num4 = %d\n\n", ft_printf("{%f}", -0.000001));

	printf(" num5 = %d\n", printf("this %.f float", 1.5));
	printf(" num5 = %d\n\n", ft_printf("this %.f float", 1.5));

	printf(" num55 = %d\n", printf("this %.f float", 1.499));
	printf(" num55 = %d\n\n", ft_printf("this %.f float", 1.499));

	printf(" num6 = %d\n", printf("{%f}", 3.9999999));
	printf(" num6 = %d\n\n", ft_printf("{%f}", 3.9999999));
	
	printf(" num7 = %d\n", printf("{%f}", 23.375094499));
	printf(" num7 = %d\n\n", ft_printf("{%f}", 23.375094499));

	printf(" num8 = %d\n", printf("{%f}", -5.9999999));
	printf(" num8 = %d\n\n", ft_printf("{%f}", -5.9999999));

	printf(" num9 = %d\n", printf("{%.0f}", -3.85));
	printf(" num9 = %d\n\n", ft_printf("{%.0f}", -3.85));

	printf(" num10 = %d\n", printf("this %.1f float", 1.5));
	printf(" num10 = %d\n\n", ft_printf("this %.1f float", 1.5));

	printf(" num11 = %d\n", printf("this %.1f float", 1.5));
	printf(" num11 = %d\n\n", ft_printf("this %.1f float", 1.5));
	
	printf(" num12 = %d\n", printf("%#.0f", 7.4));
	printf(" num12 = %d\n\n", ft_printf("%#.0f", 7.4));

	printf(" num13 = %d\n", printf("{%5.0f}", -7.3));
	printf(" num13 = %d\n\n", ft_printf("{%5.0f}", -7.3));

	printf(" num14 = %d\n", printf("{%#-3o}", 0));
	printf(" num14 = %d\n\n", ft_printf("{%#-3o}", 0));
	
	printf(" num15 = %d\n", printf("{%#3o}", 0));
	printf(" num15 = %d\n\n", ft_printf("{%#3o}", 0));

	printf(" num16 = %d\n", printf("%#6o", 2500));
	printf(" num16 = %d\n\n", ft_printf("%#6o", 2500));
	
	printf(" num3 = %d\n", printf("%#.3o", 1));
	printf(" num3 = %d\n\n", ft_printf("%#.3o", 1));

	printf(" num4 = %d\n", printf("@moulitest: %#.o %#.0o", 0, 0));
	printf(" num4 = %d\n\n", ft_printf("@moulitest: %#.o %#.0o", 0, 0));
	*/
	/*
	printf(" num5 = %d\n", printf("{%05d}", 42));
	printf(" num5 = %d\n\n", ft_printf("{%05d}", 42));

	printf(" num6 = %d\n", printf("{%05d}", 42));
	printf(" num6 = %d\n\n", ft_printf("{%05.*d}", -1, 42));

	printf(" num7 = %d\n", printf("{%5d}", 42));
	printf(" num7 = %d\n\n", ft_printf("{%5d}", 42));

	printf(" num8 = %d\n", printf("%4.15d", 42));
	printf(" num8 = %d\n\n", ft_printf("%4.15d", 42));

	printf(" num9 = %d\n", printf("{%+5.i}", 0));
	printf(" num9 = %d\n\n", ft_printf("{%+5.i}", 0));

	printf(" num10 = %d\n", printf("%-5.u", 0));
	printf(" num10 = %d\n\n", ft_printf("%-5.u", 0));

	printf(" num11 = %d\n", printf("{%08.3u}", 8375));
	printf(" num11 = %d\n\n", ft_printf("{%08.3u}", 8375));

	printf(" num12 = %d\n", printf("%08.3x", 8375));
	printf(" num12 = %d\n\n", ft_printf("%08.3x", 8375));
	*/
	//printf(" num2 = %d\n", printf("{%f}{%lf}{%Lf}", 1.426737, 1.42, 1.42l));
	//printf(" num2 = %d\n", ft_printf("{%f}{%lf}{%Lf}", 1.426737, 1.42, 1.42l));
	//printf(" num1 = %d\n", printf("%llu", 4999999999));
	//printf(" num1 = %d\n", ft_printf("%llu", 4999999999));
	//printf(" num1 = %d\n", printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242l));
	//printf(" num1 = %d\n", ft_printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242l));
	/*
	printf(" num2 = %d\n", printf("%13.0f", -145.678));
	printf(" num2 = %d\n", printf("%13.1f", -145.678));
	printf(" num2 = %d\n", printf("%015f", 145.678));
	printf(" num2 = %d\n", printf("%-15f", 145.678));
	printf(" num2 = %d\n", printf("%013f", 145.678));
	printf(" num2 = %d\n", printf("%0#13f", 145.678));
	printf(" num2 = %d\n", printf("%#13f", 145.678));
	printf(" num2 = %d\n", printf("%13f", 145.678));
	
	printf(" num2 = %d\n", printf("%-05%"));
	printf(" num2 = %d\n", ft_printf("%-05%"));
	printf(" num2 = %d\n", printf("my: %p", &c));
	printf(" num2 = %d\n", ft_printf("my: %p", &c));
	printf(" num3 = %d\n", printf("my: %p", &i));
	printf(" num4 = %d\n", ft_printf("my: %p", &i));
	
	printf(" num = %d\n", printf("@moulitest: %#.x %#.0x", 0, 0));
	printf(" num = %d\n", ft_printf("@moulitest: %#.x %#.0x", 0, 0));
	printf(" num = %d\n", printf("@moulitest: %#.x %#.0x", 0, 0));
	printf(" num = %d\n", ft_printf("@moulitest: %#.x %#.0x", 0, 0));
	*/
	/*
	printf(" num = %d\n", printf("%03.2d", 0));
	printf(" num = %d\n", ft_printf("%03.2d", 0));
	printf(" num = %d\n", printf("@moulitest: %.d %.0d", 0, 0));
	printf(" num = %d\n", ft_printf("@moulitest: %.d %.0d", 0, 0));
	printf(" num = %d\n", printf("@moulitest: %5.d %5.0d", 0, 0));
	printf(" num = %d\n", ft_printf("@moulitest: %5.d %5.0d", 0, 0));
	*/
	//printf(" num = %d\n", printf("%+u", 4294967295));
	///printf(" num = %d\n", ft_printf("%+u", 4294967295));
	//ft_printf("|% +6d|\n", 42424);
	//printf(" num = %d\n", printf("{%*s}", -5, "kek"));
	//printf(" num = %d\n", ft_printf("{%*s}", -5, "kek"));
	//   printf("|%  010d|\n", -14);
	//ft_printf("|%+10d|\n", -14);
	//ft_printf("%c\n", NULL);

	
	/*
	printf("|% .5d|\n", 14);
	printf("|%011d|\n", 14);
	
	printf("|%hhd|\n", 55555);
	ft_printf("|%hhd|\n", 55555);
	printf("|%lld|\n", 55555);
	ft_printf("|%lld|\n", 55555);
	printf("|%hd|\n", 55555);
	ft_printf("|%hd|\n", 55555);
	printf("|%ld|\n", 55555);
	ft_printf("|%ld|\n", 55555);
	*/
	/*
	printf("MY_C\n");
	//   printf("");
	//ft_printf("");
	   printf(" 1)|%c|\n", 'a');
	ft_printf(" 1)|%c|\n", 'a');
	   printf(" 2)|%.c|\n", 'a');
	ft_printf(" 2)|%.c|\n", 'a');
	   printf(" 3)|%5c|\n", 'a');
	ft_printf(" 3)|%5c|\n", 'a');
	   printf(" 4)|%10.c|\n", 'a');
	ft_printf(" 4)|%10.c|\n", 'a');
	   printf(" 5)|%10c|\n", 48);
	ft_printf(" 5)|%10c|\n", 48);
	   printf(" 6)|%*c|\n", 12, 48);
	ft_printf(" 6)|%*c|\n", 12, 48);
	   printf(" 7)|%-*c|\n", 12, 48);
	ft_printf(" 7)|%-*c|\n", 12, 48);

	printf("\nMY S\n");
	   printf(" 1)|%5s|\n", "str");
	ft_printf(" 1)|%5s|\n", "str");
	   printf(" 2)|%.5s|\n", "str");
	ft_printf(" 2)|%.5s|\n", "str");
	   printf(" 3)|%.2s|\n", "str");
	ft_printf(" 3)|%.2s|\n", "str");
	   printf(" 4)|%.0s|\n", "str");
	ft_printf(" 4)|%.0s|\n", "str");
	   printf(" 5)|%-5s|\n", "str");
	ft_printf(" 6)|%-5s|\n", "str");
	   printf(" 7)|%5.s|\n", "str");
	ft_printf(" 7)|%5.s|\n", "str");
	   //printf(" 8)|%5..s|\n", "str");
	ft_printf(" 8)|%5..s|\n", "str"); // JOPA
	   printf(" 9)|%5s|\n", "str");
	ft_printf(" 9)|%5s|\n", "str");
	   printf("10)|%5.s|\n", "str");
	ft_printf("10)|%5.s|\n", "str");
	   //printf("11)|%0s|\n", "str");
	ft_printf("11)|%0s|\n", "str"); // JOPA
	   printf("12)|%1s|\n", "str");
	ft_printf("12)|%1s|\n", "str");
	   printf("13)|%*s|\n", 0, "str");
	ft_printf("13)|%*s|\n", 0, "str");
	*/

	/*
	   printf("3)|%10.5s|\n", "str");
	   printf("4)|%.5s|\n", "str");
	   printf("5)|%10.1s|\n", "str");
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