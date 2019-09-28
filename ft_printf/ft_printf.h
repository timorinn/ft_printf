/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:26:33 by bford             #+#    #+#             */
/*   Updated: 2019/09/28 21:43:21 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct	t_pr
{
	int			p;
	int			m;
	int			o;
	int			s;
	int			nol;
	int			i1;
	int			i2;
	int			f;
	char		c;
}				t_pf;

int		ft_printf(char *s, ...);
int		ft_do_job(char **s, va_list a);
t_pf	*ft_lstnew_pf(void);
int		ft_postwork(t_pf *l, va_list a);
int		ft_c(t_pf *l, va_list a);
/*
int		ft_s(t_pf *l, va_list a);
int		ft_p(t_pf *l, va_list a);
int		ft_d(t_pf *l, va_list a);
int		ft_o(t_pf *l, va_list a);
int		ft_u(t_pf *l, va_list a);
int		ft_x(t_pf *l, va_list a);
int		ft_bigx(t_pf *l, va_list a);
int		ft_f(t_pf *l, va_list a);
*/

#endif
