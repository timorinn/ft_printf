/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:25:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/06 14:40:21 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_f_func(t_pf **l, long double f)
{
	long long	first;
	long double second;
	char		sign;

	(*l)->i2 = ((*l)->i2 || (!(*l)->i2 && (*l)->point) ? (*l)->i2 : 6);
	sign = (f < 0 ? '-' : 0);
	sign = (!sign && (*l)->p ? '+' : sign);
	sign = (!sign && (*l)->s ? ' ' : sign);
	second = (((*l)->i2) ?
	(f - (long double)((long long)f)) * ft_power(10, (*l)->i2 + 1) / 10 : 0);
	if ((*l)->point && !(*l)->i2 && ((int)(f * 10.0) % 10 >= 5))
		f++;
	else if ((*l)->point && !(*l)->i2 && ((int)(f * 10.0) % 10 <= -5))
		f--;
	if (f < 0 && ((long long)(second * 10)) % 10 <= -5)
	{
		second -= 1.0;
		if (-1 * (long long)(second) % ft_power(10, (*l)->i2) == 0)
			f--;
	}
	else if (((long long)(second * 10)) % 10 >= 5)
	{
		second += 1.0;
		if ((long long)(second) % ft_power(10, (*l)->i2) == 0)
			f++;
	}
	second *= (second < 0 ? -1 : 1);
	(*l)->i1 -= (!(*l)->point || ((*l)->point && (*l)->i2) ? 1 : 0);
	first = ft_lennbr_d(f, 10);
	(*l)->i1 -= (*l)->point + (*l)->i2 + (sign > 0);
	if ((*l)->m)
	{
		if (sign)
			ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		if (!(*l)->point || ((*l)->point && ((*l)->i2 || (*l)->o)))
			ft_many_write('.', 1, l);
		if ((*l)->i2)
			ft_putnbr_second(second, l, (*l)->i2);
		ft_many_write(' ', (*l)->i1, l);
	}
	else
	{
		ft_many_write((*l)->nol ? '0' : ' ', (*l)->i1, l);
		if (sign)
			ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		if (!(*l)->point || ((*l)->point && ((*l)->i2 || (*l)->o)))
			ft_many_write('.', 1, l);
		if ((*l)->i2)
			ft_putnbr_second(second, l, (*l)->i2);
	}
	return (1);
}
