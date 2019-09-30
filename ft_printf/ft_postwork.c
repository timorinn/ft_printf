/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_postwork.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:19:35 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 18:36:45 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_postwork(t_pf **l, va_list a, char **ms)
{
	if (((*l)->c == 'c' && ft_c(*l, a, ms)) ||
	((*l)->c == 's' && ft_s(*l, a, ms)) ||
	((*l)->c == '%' && ft_pr(*l, ms)) ||
	((*l)->c == 'd' && ft_d(*l, a, ms))
	/*
	|| (l->c == 'p' && ft_p(l, a)) ||
	(l->c == 'o' && ft_o(l, a)) || (l->c == 'u' && ft_u(l, a)) || 
	(l->c == 'x' && ft_x(l, a)) || (l->c == 'X' && ft_bigx(l, a)) ||
	(l->c == 'f' && ft_f(l, a))
		*/)
	{
		ft_clearlist(l);
		return (1);
	}
	ft_clearlist(l);
	return (0);
}