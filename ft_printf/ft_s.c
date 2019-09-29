/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 11:05:48 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 13:16:52 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int		ft_s(t_pf *l, va_list a, char **ms)
{
	char	*s;
	int		len;

	if (l->p || l->s || l->o || l->s)
		return (0);
	s = va_arg(a, char *);
	len = ft_strlen(s);
	return (1);
}