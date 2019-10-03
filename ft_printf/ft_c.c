/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:49:45 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 15:44:23 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_c(t_pf **l, va_list a)
{
	char	c;
	t_pf	*lst;

	lst = *l;
	if (lst->p || lst->f || lst->point > 1)
		return (0);
	c = va_arg(a, int);
	lst->i1 += (lst->i1 == 0 ? 1 : 0);
	lst->m += (lst->i1 < 0 ? 1 : 0);
	lst->i1 *= (lst->i1 < 0 ? -1 : 1);
	if (((lst->m) && ft_many_write(c, 1, l) && 
	ft_many_write(' ', lst->i1 - 1, l)) || (!(lst->m)	&& 
	ft_many_write(' ', lst->i1 - 1, l) && ft_many_write(c, 1, l)))
		return (1);
	return (0);
}
