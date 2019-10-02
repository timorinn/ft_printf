/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:35:26 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 13:02:22 by bford            ###   ########.fr       */
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
	else if ((lst->f == 0) /* nothing */ && !ft_d_only(l, (int)(va_arg(a, long long))))
		return (0);
	else if ((lst->f == 1) /* hh */ && !ft_d_only(l, (char)(va_arg(a, long long))))
		return (0);
	else if ((lst->f == 2) /* ll */ && !ft_d_only(l, (long long)(va_arg(a, long long))))
		return (0);
	else if ((lst->f == 3) /* h */ && !ft_d_only(l, (short)(va_arg(a, long long))))
		return (0);
	else if ((lst->f == 4) /* l */ && !ft_d_only(l, (long)(va_arg(a, long long))))
		return (0);
	return (1);
}
