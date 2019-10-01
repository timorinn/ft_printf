/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:14:08 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 20:25:01 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_putnbr_int(long long d, t_pf **l)
{
	int			len;
	long long	i;

	d = (d < 0 ? -d : d);
	len = ft_lennbr(d);
	i = (d > 9 ? ft_power(10, len - 1) : 1);
	while (i)
	{
		ft_many_write(d / i + '0', 1, l);
		d %= i;
		i /= 10;
	}
	return (1);
}