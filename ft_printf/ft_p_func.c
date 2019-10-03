/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:05:58 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 16:33:30 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_p_func(t_pf **l, unsigned long long p)
{
	int		len;
	int		i2copy;

	i2copy = (*l)->i2;
	len = ft_lennbr_u(p, 16);
	if ((*l)->i1 < 0 && ((*l)->i1 *= -1))
		(*l)->m += 1;
	(*l)->i1 = ((*l)->i1 - len < 0 ? len : (*l)->i1);
	if ((*l)->m)
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		(*l)->all += ft_putstr("0x");
		ft_many_write('0', (*l)->i2 - 4, l);
		(*l)->o && p ? ft_many_write('0', 1, l) && ft_many_write((*l)->c, 1, l) : 0;
		(*l)->all += (!p ? 0 : ft_putstr("7fff"));
		ft_putnbr_xX(p, l, len, 'x');
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len - 2, l);
	}
	else
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		(*l)->i2 = ((*l)->nol && !((*l)->i2) ? (*l)->i1 - len : (*l)->i2);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len - 2, l);
		//(*l)->o && p ? ft_many_write('0', 1, l) && ft_many_write((*l)->c, 1, l): 0;
		(*l)->all += ft_putstr("0x");
		p ? ft_many_write('0', (*l)->i2 - 4, l) : ft_many_write('0', (*l)->i2, l);
		(*l)->all +=  (!p ? 0 : ft_putstr("7fff"));
		if (!(p == 0 && !i2copy && (*l)->point))
			ft_putnbr_xX(p, l, len, 'x');
		//else if (p == 0 && (*l)->i1was && (*l)->point)
		//	ft_many_write(' ', 1, l);
	}
	return (1);
}
