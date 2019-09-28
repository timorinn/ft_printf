/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_job.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 13:24:45 by bford             #+#    #+#             */
/*   Updated: 2019/09/28 20:08:26 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // D E L

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

t_pf	*ft_pars_param_spec(char **s, t_pf *l)
{
	l->c += (**s == 'c' ? 'c' : 0);
	l->c += ((**s == 'i' || **s == 'd') ? 'd' : 0);
	l->c += (**s == 's' ? 's' : 0);
	l->c += (**s == 'p' ? 'p' : 0);
	l->c += (**s == 'u' ? 'u' : 0);
	l->c += (**s == 'p' ? 'p' : 0);
	l->c += (**s == 'x' ? 'x' : 0);
	l->c += (**s == 'X' ? 'X' : 0);
	l->c += (**s == 'o' ? 'o' : 0);
	l->c += (**s == 'f' ? 'f' : 0);
	(*s)++;
	return (l);
}

t_pf	*ft_pars_param_flag(char **s, t_pf *l)
{
	l->f = (**s == 'h' && *(*s + 1) == 'h' ? 1 : 0);
	l->f = (**s == 'l' && *(*s + 1) == 'l' ? 2 : 0);
	l->f = (**s == 'h' ? 3 : 0);
	l->f = (**s == 'l' ? 4 : 0);
	l->f = (**s == 'L' ? 5 : 0);
	if (l->f)
		(*s)++;
	return (ft_pars_param_spec(s, l));
}

t_pf	*ft_pars_param_itwo(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '.' && (*s)++)
	{
		if (**s == '*' && (*s)++)
			n += va_arg(a, int);
		else
			while (**s >= '0' && **s <= '9')
			{
				n = n * 10 + **s - '0';
				(*s)++;
			}
		l->i2 += n;
	}
	return (ft_pars_param_flag(s, l));
}

t_pf	*ft_pars_param_ione(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '*' && (*s)++)
		n += va_arg(a, int);
	else
		while (**s >= '0' && **s <= '9')
		{
			n = n * 10 + **s - '0';
			(*s)++;
		}
	l->i1 += n;
	return (ft_pars_param_itwo(s, a, l));
}

t_pf	*ft_pars_param_mpons(char **s, va_list a)
{
	t_pf	*l;

	l = ft_lstnew_pf();
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

int		ft_do_job(char **s, va_list a)
{
	t_pf *l;

	l = NULL;
	if (*(++(*s)) == '%' && ++(*s))
		write(1, "%", 1);
	else
		l = ft_pars_param_mpons(s, a);
	
	if (l)
		printf("\nPARAMS_OF_LIST 4\nminus = %d  plus = %d\noct = %d  nol = %d  space = %d\nint1 = %d  int2 = %d\nl->f = %d  l->c = %c\n", 
		l->m, l->p, l->o, l->nol, l->s, l->i1, l->i2, l->f, l->c);
	
	return (1);
}
