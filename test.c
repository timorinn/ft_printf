/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:19:15 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 21:57:59 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_ft(char *s, ...)
{
	va_list a;
	va_list b;

	va_start(a, s);

	printf("1) %d\n", va_arg(a, int));
	va_copy(b, a);
	printf("2) %d\n", va_arg(b, int));
	printf("3) %d\n", va_arg(a, int));

}

int main(void)
{
	ft_ft("s", 123, 321, 555);
	
	printf("%'f %d\n", 1234.321 ,666);
	/*
	printf("%x\n", 1234);
	printf("%#x\n", 1234);
	printf("%####x\n", 1234);
	printf("%0d\n", 1234);
	printf("%0000010d\n", 1234);
	printf("%10d\n", 1234);
	printf("%*d\n", 12, 5);
	*/
	return (0);
}