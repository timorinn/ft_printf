/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:58:36 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 20:36:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_f(long double second, t_pf **l, int second_len)
{
	long double	my;

	my = second / 10.0;
	if (second_len--)
		ft_putnbr_f(second / 10.0, l, second_len);
	//ft_many_write((int)(second % 10.0) + '0', 1, l);
	l+=0;second_len+=0;
	return (1);
}
