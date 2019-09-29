/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 11:05:48 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 21:35:48 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_s(t_pf *l, va_list a, char **ms)
{
	char	*s;
	int		len;
	
	if (l->p || l->s || l->o || l->s || l->f || l->i1 < 1)
		return (0);
	s = va_arg(a, char *);
	len = (l->point && (int)ft_strlen(s) > l->i2 ? l->i2 : ft_strlen(s));
	if (l->m)
	{
		if (!(*ms = ft_strjoinfree(*ms, s, len)))
			return (0);
		if (!(*ms = ft_stradd(*ms, ' ', l->i1 - len)))
			return (0);
	}
	else if (!l->m)
	{
		if (!(*ms = ft_stradd(*ms, ' ', l->i1 - len)))
			return (0);
		if (!(*ms = ft_strjoinfree(*ms, s, len)))
			return (0);
	}
	return (1);
}