/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:07:31 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 16:23:54 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_pr(t_pf **l)
{
	t_pf	*lst;

	lst = *l;
	lst->i1 = (lst->i1 <= 0 ? 1 : lst->i1);
	if ((lst->m && ft_many_write('%', 1, l) &&
	ft_many_write(' ', lst->i1 - 1, l)) ||
	(!(lst->m) && ft_many_write(' ', lst->i1 - 1, l) &&
	ft_many_write('%', 1, l)))
		return (1);
	return (0);
}
