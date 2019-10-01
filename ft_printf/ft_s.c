/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 11:05:48 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 16:05:31 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_s(t_pf **l, va_list a)
{
	char	*s;
	
	if ((*l)->p || (*l)->s || (*l)->o || (*l)->s || (*l)->f || (*l)->nol)
		return (0);
	s = va_arg(a, char *);
	if (!s)
		return (ft_s2(l, "(null)"));
	return(ft_s2(l, s));
}
