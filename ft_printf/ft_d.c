/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:35:26 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 18:57:05 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include <stdarg.h>

int		ft_d(t_pf *l, va_list a, char **ms)
{
	unsigned long long	num;

	printf("{ 1 }\n");
	if (l->s && l->p)
		l->s = 0;
	if (l->nol && l->m)
		l->nol = 0;
	if (l->o)
		return (0);
	if (l->f == 1)
		num = (unsigned long long)((unsigned char)(va_arg(a, int)));
	printf("NUM = %lld\n", num);
	a+=0;
	ms+=0;
	return (1);
}