/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:31:08 by bford             #+#    #+#             */
/*   Updated: 2019/10/06 14:51:57 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_s2(t_pf **l, char *s)
{
	char	*ms;
	int		len;
	int		i1;
	int		i2;

	ms = NULL;
	i1 = (*l)->i1;
	i2 = (*l)->i2;
	len = (int)ft_strlen(s);
	i2 = (i2 < 0 ? len : i2);
	len = ((*l)->point == 1 && len > i2 ? i2 : len);
	len = ((*l)->point == 1 && !((*l)->i2was) ? 0 : len);
	(*l)->m += (i1 < 0 ? 1 : 0);
	i1 *= (i1 < 0 ? -1 : 1);
	if ((*l)->m)
	{
		if (!(ms = ft_strjoinfree(ms, s, len)) ||
		((*l)->i1was && i1 >= 0 && i1 > len &&
		!(ms = ft_stradd(&ms, ' ', i1 - len))))
			return (0);
	}
	else if (!((*l)->m))
		if (((*l)->i1was && i1 >= 0 && i1 > len &&
		!(ms = ft_stradd(&ms, ' ', i1 - len))) ||
		!(ms = ft_strjoinfree(ms, s, len)))
			return (0);
	(*l)->all += ft_strlen(ms);
	ft_putstr(ms);
	ft_strdel(&ms);
	return (1);
}
