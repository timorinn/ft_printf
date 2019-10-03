/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_job.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 13:24:45 by bford             #+#    #+#             */
/*   Updated: 2019/10/03 18:34:29 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // D E L

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

t_pf	*ft_pars_param_spec(char **s, t_pf *l)
{
	l->c += (**s == 'c' ? 'c' : 0);
	l->c += ((**s == 'd' || **s == 'i') ? 'd' : 0);
	l->c += (**s == 's' ? 's' : 0);
	l->c += (**s == 'p' ? 'p' : 0);
	l->c += (**s == 'u' ? 'u' : 0);
	l->c += (**s == 'x' ? 'x' : 0);
	l->c += (**s == 'X' ? 'X' : 0);
	l->c += (**s == 'o' ? 'o' : 0);
	l->c += (**s == 'f' ? 'f' : 0);
	l->c += (**s == '%' ? '%' : 0);
	if (l->c)
		(*s)++;
	return (l);
}

t_pf	*ft_pars_param_flag(char **s, t_pf *l)
{
	l->f = (**s == 'h' ? 3 : l->f);
	l->f = (**s == 'l' ? 4 : l->f);
	l->f = (**s == 'h' && *(*s + 1) == 'h' && (*s)++ && !(l->f = 0) ? 1 : l->f);
	l->f = (**s == 'l' && *(*s + 1) == 'l' && (*s)++ && !(l->f = 0) ? 2 : l->f);
	l->f = (**s == 'L' ? 5 : l->f);
	if (l->f)
		(*s)++;
	return (ft_pars_param_spec(s, l));
}

t_pf	*ft_pars_param_itwo(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '.' && (*s)++ && (l->point = 1))
	{
		if (**s == '*' && (*s)++ && (l->i2was = 1))
			n += va_arg(a, int);
		else
			while (**s >= '0' && **s <= '9')
			{
				n = n * 10 + **s - '0';
				(*s)++;
				l->i2was = 1;
			}
		l->i2 += n;
	}
	return (ft_pars_param_flag(s, l));
}

t_pf	*ft_pars_param_ione(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '*' && (*s)++ && (l->i1was = 1))
		n += va_arg(a, int);
	if (**s >= '0' && **s <= '9' && !(n = 0))
	{
		while (**s >= '0' && **s <= '9')
		{
			n = n * 10 + **s - '0';
			(*s)++;
			l->i1was = 1;
		}
	}
	l->i1 += n;
	return (ft_pars_param_itwo(s, a, l));
}

t_pf	*ft_pars_param_mpons(char **s, va_list a, t_pf *l)
{
	while (**s && (**s == '-' || **s == '+' || **s == '-' || **s == '#' ||
	**s == '0' || **s == ' '))
	{
		l->m += (**s == '-' ? 1 : 0);
		l->p += (**s == '+' ? 1 : 0);
		l->o += (**s == '#' ? 1 : 0);
		l->nol += (**s == '0' ? 1 : 0);
		l->s += (**s == ' ' ? 1 :0);
		(*s)++;
	}
	return (ft_pars_param_ione(s, a, l));
}

int		ft_do_job(char **s, va_list a, t_pf *l)
{
	(*s)++;
	if ((l = ft_pars_param_mpons(s, a, l))  && ft_postwork(&l, a))
		return (1);
	return (0);
}
