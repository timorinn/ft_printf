/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:02:56 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 20:41:02 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // DEL

#include "libft.h"
#include "ft_printf.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(char *s, ...)
{
	va_list	a;
	char	*ms;

	ms = NULL;
	va_start(a, s);
	while (*s)
	{
		if (*s == '%')
		{
			if (!(ft_do_job(&s, &ms, a)))
			{
				ft_strdel(&ms);
				return (0);
			}
		}
		else if (!(ms = ft_strsym(&ms, *s)))
		{
			ft_strdel(&ms);
			return (0);
		}
		else
			s++;
	}
	ft_putstr(ms);
	ft_strdel(&ms);
	va_end(a);
	return (1);
}
