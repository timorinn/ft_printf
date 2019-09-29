/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:02:56 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 21:31:17 by bford            ###   ########.fr       */
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
		if (*s == '%' && !(ft_do_job(&s, &ms, a)) && ft_strdel(&ms))
		{
			printf("JOPA!\n");
			return (0);
		}
		else if (*s != '%' && !(ms = ft_strsym(&ms, *s)))
		{
			printf("J O P A!\n");
			return (0);
		}
		else
			s++;
	ft_putstr(ms);
	ft_strdel(&ms);
	va_end(a);
	return (1);
}
