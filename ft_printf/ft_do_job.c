/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_job.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 13:24:45 by bford             #+#    #+#             */
/*   Updated: 2019/10/06 11:20:20 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

t_pf	*ft_pars_param_flag_spec(char **s, t_pf *l)
{
	char	c;

	c = **s;
	if (c == 'h' && (l->f = 3))
		*s += (*(*s + 1) == 'h' && (l->f = 1) ? 1 : 0);
	else if (c == 'l' && (l->f = 4))
		*s += (*(*s + 1) == 'l' && (l->f = 2) ? 1 : 0);
	else if (c == 'L')
		l->f = 5;
	if (l->f)
		c = *(++(*s));
	if ((c == 'c' || c == 'd' || c == 'i' || c == 's' ||
	c == 'p' || c == 'u' || c == 'x' || c == 'X' || c == 'o' ||
	c == 'f' || c == '%') && (l->c = c))
		++(*s);
	return (l);
}
/*
t_pf	*ft_pars_param_flag(char **s, t_pf *l)
{
	char	f;

	f = **s;
	if (f == 'h' && (l->f = 3))
		*s += (*(*s + 1) == 'h' && (l->f = 1) ? 1 : 0);
	else if (f == 'l' && (l->f = 4))
		*s += (*(*s + 1) == 'l' && (l->f = 2) ? 1 : 0);
	else if (f == 'L')
		l->f = 5;
	if (l->f)
		(*s)++;
	return (ft_pars_param_spec(s, l));
}
*/
t_pf	*ft_pars_param_itwo(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '.' && (*s)++ && (l->point = 1))
	{
		if (**s == '*' && (*s)++ && (l->i2was = 1))
			n += va_arg(a, int);
		if (**s >= '0' && **s <= '9' && !(n = 0) && (l->i2was = 1))
			while (**s >= '0' && **s <= '9')
			{
				n = n * 10 + **s - '0';
				(*s)++;
			}
		l->i2 += n;
	}
	return (ft_pars_param_flag_spec(s, l));
}

t_pf	*ft_pars_param_ione(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '*' && (*s)++ && (l->i1was = 1))
		n += va_arg(a, int);
	if (**s >= '0' && **s <= '9' && !(n = 0) && (l->i1was = 1))
		while (**s >= '0' && **s <= '9')
		{
			n = n * 10 + **s - '0';
			(*s)++;
		}
	l->i1 += n;
	return (ft_pars_param_itwo(s, a, l));
}

t_pf	*ft_pars_param_mpons(char **s, va_list a, t_pf *l)
{
	char	c;

	while ((c = **s) && ((c == '-' && (l->m = 1)) ||
	(c == '+' && (l->p = 1)) || (c == '#' && (l->o = 1)) ||
	(c == '0' && (l->nol = 1)) || (c == ' ' && (l->s = 1))))
		(*s)++;
	return (ft_pars_param_ione(s, a, l));
}

int		ft_do_job(char **s, va_list a, t_pf *l)
{
	(*s)++;
	if ((l = ft_pars_param_mpons(s, a, l))  && ft_postwork(&l, a))
		return (1);
	return (0);
}
