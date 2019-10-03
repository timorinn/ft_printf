/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:25:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 20:28:15 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_f_func(t_pf **l, long double f)
{
	long long	first;
	long double second;
	//long long	second;
	long long	second_len;
	char		sign;

	(*l)->i2 = ((*l)->i2 ? (*l)->i2 : 6);
	sign = (f < 0 ? '-' : 0);
	sign = (!sign && (*l)->p ? '+' : sign);
	sign = (!sign && (*l)->s ? ' ' : sign);
	//second = (((*l)->i2) ? ((f - (long double)((int)f)) * ft_power(10, (*l)->i2 + 1)) / 10 : 0);
	second = (long double)((f - (long double)((int)f)) * ft_power(10, (*l)->i2));
	//printf("KEK == %lld\n", second );
	//printf("KEK == %lld\n", (long long)(second / 100000.0));
	
	first = ft_lennbr_d(f, 10);
	second_len = ft_lennbr_d(second, 10);
	if ((*l)->m)
	{
		ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		second_len ? ft_many_write('.', 1, l) &&
		ft_putnbr_d(second, l, second_len - 1) : 0;
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - (*l)->point - first - sign, l);
	}
	else
	{
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - (*l)->point - first - sign, l);
		ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		second_len ? ft_many_write('.', 1, l) &&
		ft_putnbr_f(second, l, second_len - 1) : 0;
	}

	l+=0;f+=0;return(1);
}
