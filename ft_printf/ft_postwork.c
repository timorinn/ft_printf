/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_postwork.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:19:35 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 13:16:38 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int		ft_postwork(t_pf *l, va_list a, char **ms)
{
	
	if (
		(l->c == 'c' && ft_c(l, a, ms)) || (l->c == 's' && ft_s(l, a, ms))
		/*
	|| (l->c == 'p' && ft_p(l, a)) || (l->c == 'd' && ft_d(l, a)) ||
	(l->c == 'o' && ft_o(l, a)) || (l->c == 'u' && ft_u(l, a)) || 
	(l->c == 'x' && ft_x(l, a)) || (l->c == 'X' && ft_bigx(l, a)) ||
	(l->c == 'f' && ft_f(l, a))
		*/
		)
		return (1);
	return (0);
}