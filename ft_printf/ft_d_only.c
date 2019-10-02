/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_only.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:42:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 14:41:58 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_d_only(t_pf **l, long long d)
{
	int		znak;
	int		zap;
	int		len;

	len = ft_lennbr(d, 10);
	znak = (d < 0 ? '-' : 0);
	znak = (!znak && (*l)->p ? '+' : znak);
	znak = (!znak && (*l)->s ? ' ' : znak);
	zap = (((*l)->nol && !((*l)->m)) ? '0' : ' ');
	if ((*l)->i1 < 0 && ((*l)->i1 *= -1))
		(*l)->m += 1;
	(*l)->i1 -= (znak ? 1 : 0);
	(*l)->i1 = ((*l)->i1 - len < 0 ? len : (*l)->i1);
	if ((*l)->m)
	{
		if (znak)
			ft_many_write(znak, 1, l);
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		ft_many_write('0', (*l)->i2, l);
		ft_putnbr_int(d, l, len);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
	}
	else
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		//printf("i2 = %d\n", (*l)->i2);
		(*l)->i2 = ((*l)->nol && !((*l)->i2) ? (*l)->i1 - len : (*l)->i2);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
		if (znak)
			ft_many_write(znak, 1, l);
		ft_many_write('0', (*l)->i2, l);;
		if (d == 0 && ((*l)->i2 == 0 && (*l)->point))
		{
			ft_many_write(' ', 1, l);
		}
		else
			ft_putnbr_int(d, l, len);
	}
	return (1);
}
