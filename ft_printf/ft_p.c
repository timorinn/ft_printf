/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:02:17 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 15:14:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_p(t_pf **l, va_list a)
{
	t_pf	*lst;

	lst = *l;
	if (lst->p == 0 && ft_p_func(l, (unsigned int)va_arg(a, unsigned long long)))
		return (1);
	return (0);
}
