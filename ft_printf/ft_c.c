/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:49:45 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 15:07:59 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_c(t_pf *l, va_list a, char **ms)
{
	char c;

	if (l->p || l->s || l->o || l->s || l->i2 || l->f || l->i1 < 0)
		return (0);
	c = va_arg(a, int);
	if (l->m)
	{
		*ms = ft_stradd(*ms, c, 1);
		if (l->i1 >= 1)
			*ms = ft_stradd(*ms, ' ', l->i1 - 1);
	}
	else
	{
		if (l->i1 >= 1)
			*ms = ft_stradd(*ms, ' ', l->i1 - 1);
		*ms = ft_stradd(*ms, c, 1);
	}
	return (1);
}
