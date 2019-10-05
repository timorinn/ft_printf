/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:25:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/05 13:47:39 by bford            ###   ########.fr       */
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

	(*l)->i2 = ((*l)->i2 || (!(*l)->i2 && (*l)->point) ? (*l)->i2 : 6);

	sign = (f < 0 ? '-' : 0);
	sign = (!sign && (*l)->p ? '+' : sign);
	sign = (!sign && (*l)->s ? ' ' : sign);
	second = (((*l)->i2) ? (f - (long double)((long long)f)) * ft_power(10, (*l)->i2 + 1) / 10 : 0);
	if (f < 0)
	{
		if (((long long)(second * 10)) % 10 > 5)
			second -= 0.5;
	}
	//else if (((long long)(second * 10)) % 10 > 5)
	//		second += 0.5;
	//second += (second < 0 ? -0.6 : 0.6);



	second *= (second < 0 ? -1 : 1);
	(*l)->i1 -= (!(*l)->point || ((*l)->point && (*l)->i2) ? 1 : 0);
	//((f - (long double)((int)f)) * ft_power(10, (*l)->i2 + 1));
	//printf("\nKEK == %d\n", (second ));
	//printf("\nSECOND == %Lf\n", second );
	//printf("KEK == %lld\n", (long long)(second / 100000.0));
	
	first = ft_lennbr_d(f, 10);
	second_len = ft_lennbr_d(second, 10);
	//printf("\nSECOND === %LF\nI2 === %d\n", second, (*l)->i2);
	if ((*l)->m)
	{
		if (sign)
			ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		//second_len ? ft_many_write('.', 1, l) &&
		//ft_putnbr_d(second, l, second_len - 1) : 0;
		
		//ft_putnbr_d(second, l, (*l)->i2 - 1);
		ft_putnbr_second(second, l, (*l)->i2);

		ft_many_write(' ', (*l)->i1 - (*l)->i2 - (*l)->point - first - sign, l);
	}
	else
	{
		ft_many_write((*l)->nol ? '0' : ' ', (*l)->i1 - (*l)->i2 - /* (*l)->point - */ first - sign, l);
		if (sign)
			ft_many_write(sign, 1, l);
		ft_putnbr_d(f, l, first);
		if (!(*l)->point || ((*l)->point && (*l)->i2))
		ft_many_write('.', 1, l);
		//second_len ? ft_many_write('.', 1, l) &&
		//ft_putnbr_f(second, l, second_len - 1) : 0;
		if ((*l)->i2)
			ft_putnbr_second(second, l, (*l)->i2);
	}
	return(1);
}
