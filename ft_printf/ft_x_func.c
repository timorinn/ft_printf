/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:51:07 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 20:02:27 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_x_func(t_pf **l, unsigned long long x)
{
	int		len;
	int		i2copy;

	i2copy = (*l)->i2;
	len = ft_lennbr_u(x, 16);
	if ((*l)->i1 < 0 && ((*l)->i1 *= -1))
		(*l)->m += 1;
	(*l)->i1 = ((*l)->i1 - len < 0 ? len : (*l)->i1);

	(*l)->i1 -= ((*l)->o ? 1 : 0);
	
	if ((*l)->m)
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		ft_many_write('0', (*l)->i2, l);
		(*l)->o ? ft_many_write('0', 1, l) : 0;
		ft_putnbr_o(x, l, len);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
	}
	else
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		(*l)->i2 = ((*l)->nol && !((*l)->i2) ? (*l)->i1 - len : (*l)->i2);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
		(*l)->o && x ? ft_many_write('0', 1, l) : 0;
		ft_many_write('0', (*l)->i2, l);
		if (!(x == 0 && !i2copy && (*l)->point && !(*l)->o))
			ft_putnbr_o(x, l, len);
		else if (x == 0 && (*l)->i1was && (*l)->point)
			ft_many_write(' ', 1, l);
	}
	return (1);
}
