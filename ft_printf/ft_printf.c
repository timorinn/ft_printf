/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:02:56 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 20:42:42 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // DEL

#include "libft.h"
#include "ft_printf.h"

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(char *s, ...)
{
	va_list	a;

	va_start(a, s);
	while (*s)
	{
		if (*s == '%')
			ft_do_job(&s, a);
		else
			write(1, s++, 1);
	}
	va_end(a);
	return (1);
}
