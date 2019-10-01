/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:14:08 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 17:53:13 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_putnbr_int(long long d, t_pf **l, char c)
{
	int			len;
	long long	i;

	len = ft_lennbr(d);
	if ((*l)->i1 - len > 0)
		ft_many_write(c, (*l)->i1 - len, l);
	i = ft_power(10, len - 1);
	//printf("I = %lld\nD = %lld\n", i, d);
	while (i)
	{
		ft_many_write(d / i + '0', 1, l);
		d %= i;
		i /= 10;
	}
	return (1);
}