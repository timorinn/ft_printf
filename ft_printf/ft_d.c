/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:35:26 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 20:48:25 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include <stdarg.h>

int		ft_d(t_pf *l, va_list a, char **ms)
{
	unsigned long long	num;

	num = 0;
	if (l->s && l->p)
		l->s = 0;
	if (l->nol && l->m)
		l->nol = 0;
	if (l->o)
		return (0);
	if (l->f == 1) // hh
		num = ((unsigned char)(va_arg(a, unsigned long long)));
	if (l->f == 2) //ll
		num = ((long long)(va_arg(a, unsigned long long)));
	if (l->f == 3) //h
		num = ((short)(va_arg(a, unsigned long long)));
	if (l->f == 4) //l
		num = ((long)(va_arg(a, unsigned long long)));
	printf("NUM = %lld\n", num);
	a+=0;
	ms+=0;
	return (1);
}
