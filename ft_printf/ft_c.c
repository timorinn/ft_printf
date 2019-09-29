/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:49:45 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 13:16:53 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_c(t_pf *l, va_list a, char **ms)
{
	char c;

	if (l->p || l->s || l->o || l->s || l->i2 || l->f || l->i1 < 0)
		return (0);
	
	c = va_arg(a, int);
	/*
	if (l->m)
	{
		write(1, &c, 1);
		while ((l->i1)-- -1 > 0) 
			write(1, " ", 1);
	}
	else
	{
		while ((l->i1)-- -1 > 0) 
			write(1, " ", 1);
		write(1, &c, 1);
	}
	*/
	return (1);
}
