/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:26:33 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 19:07:39 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct	t_pr
{
	int			p;
	int			m;
	int			o;
	int			s;
	int			nol;
	int			i1;
	int			i1was;
	int			point;
	int			i2;
	int			i2was;
	int			f;
	char		c;
	int			all;
}				t_pf;

int			ft_printf(char *s, ...);
int			ft_do_job(char **s, va_list a, t_pf *l);
t_pf		*ft_lstnew_pf(void);
int			ft_postwork(t_pf **l, va_list a);
int			ft_pr(t_pf **l);
int			ft_c(t_pf **l, va_list a);
int			ft_s(t_pf **l, va_list a);
int			ft_s2(t_pf **l, char *s);
int			ft_d(t_pf **l, va_list a);
int			ft_d_only(t_pf **l, long long d);
int			ft_putnbr_int(long long d, t_pf **l); //, char sp_pl, char min_nol);
void		ft_clearlist(t_pf **l);
int			ft_nollist(t_pf **l);
int			ft_many_write(char c, int z, t_pf **l);
int			ft_lennbr(long long d);
long long	ft_power(int num, int power);
/*
int		ft_p(t_pf *l, va_list a);
int		ft_d(t_pf *l, va_list a);
int		ft_o(t_pf *l, va_list a);
int		ft_u(t_pf *l, va_list a);
int		ft_x(t_pf *l, va_list a);
int		ft_bigx(t_pf *l, va_list a);
int		ft_f(t_pf *l, va_list a);
*/

#endif
