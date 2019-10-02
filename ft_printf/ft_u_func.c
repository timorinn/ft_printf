/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:34:46 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 17:38:48 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_u_func(t_pf **l, unsigned long long u)
{
	int		len;
	int		i2copy;

	i2copy = (*l)->i2;
	len = ft_lennbr_u(u, 10);
	if ((*l)->i1 < 0 && ((*l)->i1 *= -1))
		(*l)->m += 1;
	(*l)->i1 = ((*l)->i1 - len < 0 ? len : (*l)->i1);
	if ((*l)->m)
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		ft_many_write('0', (*l)->i2, l);
		ft_putnbr_u(u, l, len);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
	}
	else
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		(*l)->i2 = ((*l)->nol && !((*l)->i2) ? (*l)->i1 - len : (*l)->i2);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
		ft_many_write('0', (*l)->i2, l);;
		if (!(u == 0 && !i2copy && (*l)->point))
			ft_putnbr_u(u, l, len);
		else if (u == 0 && (*l)->i1was && (*l)->point)
			ft_many_write(' ', 1, l);
	}
	return (1);
}