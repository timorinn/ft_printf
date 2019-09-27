/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:26:33 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 17:49:18 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct	t_pr
{
	int			plus;
	int			minus;
	int			oct;
	int			space;
	int			nol;
	int			i1;
	int			i2;
	char		c;
}				t_pf;

int		ft_printf(char *s, ...);
int		ft_do_job(char **s, va_list a);
t_pf	*ft_lstnew_pf(void);

#endif
