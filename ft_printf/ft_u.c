/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:06:57 by bford             #+#    #+#             */
/*   Updated: 2019/10/02 17:32:01 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_u(t_pf **l, va_list a)
{
	t_pf	*lst;

	lst = *l;
	if ((lst->f == 0 && ft_u_func(l, (unsigned int)va_arg(a, unsigned int))) ||
	(lst->f == 2 && ft_u_func(l, (unsigned long)va_arg(a, unsigned long))) ||
	(lst->f == 4 &&
	ft_u_func(l, (unsigned long long)va_arg(a, unsigned long long))))
		return (1);
	return (0);
}