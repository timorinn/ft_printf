/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:31:08 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 17:39:32 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_s2(t_pf *l, char *s, char **ms)
{
	int len;

	len = (l->point && (int)ft_strlen(s) > l->i2 ? l->i2 : ft_strlen(s));
	if (l->m)
	{
		if (!(*ms = ft_strjoinfree(*ms, s, len)))
			return (0);
		if (l->i1was && l->i1 >= 0 && !(*ms = ft_stradd(*ms, ' ', l->i1 - len)))
			return (0);
	}
	else if (!l->m)
	{
		if (l->i1was && l->i1 >= 0 && !(*ms = ft_stradd(*ms, ' ', l->i1 - len)))
			return (0);
		printf("{ 2 } MS = %s\n", *ms);
		if (!(*ms = ft_strjoinfree(*ms, s, len)))
			return (0);
		printf("{ 3 } MS = %s\n", *ms);
	}
	return (1);
}