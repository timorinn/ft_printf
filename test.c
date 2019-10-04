/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:19:15 by bford             #+#    #+#             */
/*   Updated: 2019/10/04 10:45:51 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
void f3(char *s)
{
	printf("F2 == %c\n", *s);
	s++;
}

void f2(char *s)
{
	printf("F2 == %c\n", *s);
	s++;
	f3(s);
}

void f(char *s)
{
	printf("F2 == %c\n", *s);
	s++;
	f2(s);
}

int main(void)
{
	char s[6] = "KekEs";
	f(s);
	printf("BLYAT %c\n", *s);
	return (0);
}