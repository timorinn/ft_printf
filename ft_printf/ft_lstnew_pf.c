/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:54:12 by bford             #+#    #+#             */
/*   Updated: 2019/09/27 20:34:11 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

t_pf	*ft_lstnew_pf(void)
{
	t_pf *l;

	if (!(l = (t_pf *)malloc(sizeof(t_pf))))
		return (0);
	l->minus = 0;
	l->plus = 0;
	l->c = 0;
	l->i1 = 0;
	l->i2 = 0;
	l->oct = 0;
	l->space = 0;
	l->nol = 0;
	return (l);
}
