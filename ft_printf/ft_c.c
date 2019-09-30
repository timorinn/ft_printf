/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:49:45 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 13:13:08 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_c(t_pf *l, va_list a, char **ms)
{
	char c;

	if (l->p || l->s || l->o || l->s || l->i2 || l->f || l->i1 < 0 || l->point > 1)
		return (0);
	c = va_arg(a, int);

	l->i1 += (l->i1 == 0 ? 1 : 0);
	if (((l->m) && (*ms = ft_stradd(*ms, c, 1)) &&
	(*ms = ft_stradd(*ms, ' ', l->i1 - 1))) ||
	(!(l->m) && ((*ms = ft_stradd(*ms, ' ', l->i1 - 1)) &&
	(*ms = ft_stradd(*ms, c, 1)))))
		return (1);
	return (0);
}
