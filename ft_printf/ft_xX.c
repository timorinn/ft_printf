/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 20:47:00 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 20:47:02 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_xX(t_pf **l, va_list a)
{
	t_pf	*lst;

	lst = *l;
	if (
	(lst->f == 0 && ft_xX_func(l, (unsigned int)va_arg(a, unsigned long long))) ||
	(lst->f == 1 && ft_xX_func(l, (unsigned char)va_arg(a, unsigned long long))) ||
	(lst->f == 2 && ft_xX_func(l, (unsigned long long)va_arg(a, unsigned long long))) ||
	(lst->f == 3 && ft_xX_func(l, (unsigned short)va_arg(a, unsigned long long))) ||
	(lst->f == 4 && ft_xX_func(l, (unsigned long)va_arg(a, unsigned long long)))
	)
		return (1);
	return (0);
}
