/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:35:26 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 16:55:13 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include <stdarg.h>

int		ft_d(t_pf **l, va_list a)
{
	unsigned long long	num;
	t_pf				*lst;

	lst = *l;
	num = 0;
	if (lst->o)
		return (0);
	else if ((lst->f == 0) /* nothing */ && !ft_d_only(l, (int)(va_arg(a, unsigned long long))))
		return (0);
	else if (lst->f == 1) /* hh */
		num = ((unsigned char)(va_arg(a, unsigned long long)));
	else if (lst->f == 2) /* ll */
		num = ((long long)(va_arg(a, unsigned long long)));
	else if (lst->f == 3) /* h */
		num = ((short)(va_arg(a, unsigned long long)));
	else if (lst->f == 4) /* l */
		num = ((long)(va_arg(a, unsigned long long)));
	return (1);
}
