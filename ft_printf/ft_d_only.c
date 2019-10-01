/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_only.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:42:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 21:53:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_d_only(t_pf **l, long long d)
{
	int		znak;
	int		zap;
	int		len;

	len = ft_lennbr(d);
	znak = (d < 0 ? '-' : 0);
	znak = (!znak && (*l)->p ? '+' : znak);
	znak = (!znak && (*l)->s ? ' ' : znak);
	zap = (((*l)->nol && !((*l)->m)) ? '0' : ' ');
	(*l)->i1 -= (znak ? 1 : 0);
	(*l)->i1 = ((*l)->i1 - len < 0 ? len : (*l)->i1);
	if ((*l)->m)
	{
		if (znak)
			ft_many_write(znak, 1, l);
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		ft_many_write('0', (*l)->i2, l);
		ft_putnbr_int(d, l);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
	}
	else
	{
		(*l)->i2 = ((*l)->i2 - len >= 0 ? (*l)->i2 - len : 0);
		(*l)->i2 = ((*l)->nol && !((*l)->i2) ? (*l)->i1 - len : (*l)->i2);
		ft_many_write(' ', (*l)->i1 - (*l)->i2 - len, l);
		if (znak)
			ft_many_write(znak, 1, l);
		ft_many_write('0', (*l)->i2, l);;
		if (!(d == 0 && (!((*l)->i2) && (*l)->point)))
			ft_putnbr_int(d, l);
		/*
		if ((*l)->i2 < len)
			(*l)->i2 = len;
		if (zap == '0' && znak)
			ft_many_write(znak, 1, l);
		if ((*l)->nol)
			(*l)->i2 = (*l)->i1;
		ft_many_write(' ', (*l)->i1 - (*l)->i2, l);
		if (zap != '0' && znak)
			ft_many_write(znak, 1, l);
		ft_many_write('0', (*l)->i2 - len, l);
		ft_putnbr_int(d, l);
		*/
	}
	return (1);
	//znak = ((*l)->p ? '+' : 0);
	//znak = (!((*l)->p) && (*l)->s ? ' ' : znak);

	//zap = ((*l)->m ? '-' : ' ');
	//zap = ((*l)->nol && !((*l)->m) ? '0' : zap);

	/*
	if (sp_or_plus == ' ' && d > -1 && ft_many_write(' ', 1, l))
		(*l)->i1 -= 1;
	else if (sp_or_plus == '+' || d < 0)
	{
		if (d < 0)
			sp_or_plus = '-';
		(*l)->i1 -= 1;
	}
	
	if (!((*l)->m) && (*l)->i1 - len > 0)
		ft_many_write(nol_or_min, (*l)->i1 - len, l);
	//ft_many_write(sp_or_plus, 1, l);
	ft_putnbr_int(d, l);
	if ((*l)->m && (*l)->i1 - len > 0)
			ft_many_write(' ', (*l)->i1 - len, l);
	return (1); // (ft_putnbr_int(d, l) , sp_or_plus, nol_or_min));
	*/
}
