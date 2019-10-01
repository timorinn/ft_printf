/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:02:56 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 14:19:00 by bford            ###   ########.fr       */
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
	int		str_len;

	ms = NULL;
	va_start(a, s);
	while (*s)
	{
		if (*s == '%')
		{
			if (!ft_do_job(&s, &ms, a))
			{
				printf("J O P A!\n");
				ft_strdel(&ms);
				return (-1);
			}
			continue;
		}
		else if (*s != '%' && !(ms = ft_stradd(&ms, *s, 1)))
		{
			printf("J O P A!\n");
			return (-1);
		}
		s++;
	}
	if (ms)
	{
		ft_putstr(ms);
		ft_strdel(&ms);
	}
	va_end(a);
	return (str_len);
}
