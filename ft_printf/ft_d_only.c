/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_only.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 10:42:59 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 18:24:49 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_d_only(t_pf **l, long long d)
{
	int		sp_or_plus;
	int		nol_or_min;

	sp_or_plus = ((*l)->p ? '+' : 0);
	sp_or_plus = ((*l)->s && !((*l)->p) ? ' ' : sp_or_plus);
	nol_or_min = ((*l)->m ? '-' : 0);
	nol_or_min = ((*l)->nol && !((*l)->m) ? '0' : nol_or_min);

	if (sp_or_plus == ' ' && d > -1 && ft_many_write(' ', 1, l))
		(*l)->i1 -= 1;
	else if (sp_or_plus == '+' || d < 0)
	{
		if (d < 0)
			sp_or_plus = '-';
		ft_many_write(sp_or_plus, 1, l);
		(*l)->i1 -= 1;
	}
	return (ft_putnbr_int(d, l, sp_or_plus, nol_or_min));
}
