/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:14:08 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 19:06:39 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_putnbr_int(long long d, t_pf **l) //, char sp_pl, char min_nol)
{
	int			len;
	long long	i;

	//sp_pl = 0;
	//min_nol = (min_nol == 0 ? ' ' : min_nol);
	d = (d < 0 ? -d : d);
	len = ft_lennbr(d);
	//if (!((*l)->m) && (*l)->i1 - len > 0)
	//	ft_many_write(min_nol, (*l)->i1 - len, l);
	i = (d > 9 ? ft_power(10, len - 1) : 1);
	while (i)
	{
		ft_many_write(d / i + '0', 1, l);
		d %= i;
		i /= 10;
	}
	//if ((*l)->m && (*l)->i1 - len > 0)
	//	ft_many_write(' ', (*l)->i1 - len, l);
	return (1);
}