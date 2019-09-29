/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:02:56 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 14:31:38 by bford            ###   ########.fr       */
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
	char	*cpy;

	va_start(a, s);
	if (!(ms = (char *)malloc(sizeof(char) * 1)))
		return (-1);
	cpy = ms;
	*ms = '\0';
	while (*s)
	{
		if (*s == '%')
		{
			if (!(ms = ft_do_job(&s, &ms, a)))
				return (0);
		}
		else if (!(ms = ft_strjoinfree(ms, s, 1)))
			return (0);
		s++;
	}
	ft_putstr(ms);
	free(ms);
	va_end(a);
	return (1);
}
