/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_postwork.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:19:35 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 15:16:43 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_postwork(t_pf **l, va_list a)
{
	char	type_spec;

	type_spec = (*l)->c;
	if ((!type_spec) ||
	(type_spec == 'c' && ft_c(l, a)) ||
	(type_spec == 's' && ft_s(l, a)) ||
	(type_spec == '%' && ft_pr(l)) ||
	(type_spec == 'd' && ft_d(l, a)) ||
	(type_spec == 'u' && ft_u(l, a)) ||
	(type_spec == 'o' && ft_o(l, a)) ||
	((type_spec == 'x' || type_spec == 'X') && ft_xX(l, a)) ||
	(type_spec == 'p' && ft_p(l, a))
	//(l->c == 'f' && ft_f(l, a))
	)
		return (ft_nollist(l));
	return (0);
}
