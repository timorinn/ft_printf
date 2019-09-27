/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_job.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 13:24:45 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 23:16:25 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // D E L

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int		ft_pars_param_itwo(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '.' && (*s)++)
	{
		if (**s == '*')
		{
			n += va_arg(a, int);
			(*s)++;
		}
		else
			while (**s >= '0' && **s <= '9')
			{
				n = n * 10 + **s - '0';
				(*s)++;
			}
		l->i2 += n;
	}
	//printf("\nPARAMS_OF_LIST 3\nminus = %d\nplus = %d\noct = %d\nnol = %d\nspace = %d\nint1 = %d\nint2 = %d\n", 
	//l->minus, l->plus, l->oct, l->nol, l->space, l->i1, l->i2);
	return (0);
}

int		ft_pars_param_ione(char **s, va_list a, t_pf *l)
{
	int n;

	if (!(n = 0) && **s == '*')
	{
		n += va_arg(a, int);
		(*s)++;
	}
	else
		while (**s >= '0' && **s <= '9')
		{
			n = n * 10 + **s - '0';
			(*s)++;
			// ОБРАБОТАТЬ БАКСЫ
		}
	l->i1 += n;
	ft_pars_param_itwo(s, a, l);
	return (0);
}

int		ft_pars_param_mpons(char **s, va_list a)
{
	t_pf	*l;

	l = ft_lstnew_pf();
	while (**s && (**s == '-' || **s == '+' || **s == '-' || **s == '#' ||
	**s == '0' || **s == ' '))
	{
		l->minus += (**s == '-' ? 1 : 0);
		l->plus += (**s == '+' ? 1 : 0);
		l->oct += (**s == '#' ? 1 : 0);
		l->nol += (**s == '0' ? 1 : 0);
		l->space += (**s == ' ' ? 1 :0);
		(*s)++;
	}
	ft_pars_param_ione(s, a, l);
	return (0);
}

int		ft_do_job(char **s, va_list a)
{
	int	len;

	
	len = 0;
	if (*(++(*s)) == '%')
		write(1, "%", 1);
	else
		ft_pars_param_mpons(s, a);
	return (0);
}
