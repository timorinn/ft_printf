/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_postwork.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:19:35 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 19:59:09 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_postwork(t_pf **l, va_list a)
{
	if (!((*l)->c) ||
	((*l)->c == 'c' && ft_c(l, a)) ||
	((*l)->c == 's' && ft_s(l, a)) ||
	((*l)->c == '%' && ft_pr(l)) ||
	((*l)->c == 'd' && ft_d(l, a)) ||
	((*l)->c == 'u' && ft_u(l, a)) ||
	((*l)->c == 'o' && ft_o(l, a)) ||
	((*l)->c == 'x' && ft_x(l, a))
	/*
	(l->c == 'x' && ft_x(l, a)) || (l->c == 'X' && ft_bigx(l, a)) ||
	(l->c == 'f' && ft_f(l, a))
		*/)
		return (ft_nollist(l));
	return (0);
}
