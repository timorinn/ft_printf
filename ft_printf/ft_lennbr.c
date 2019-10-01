/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lennbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:13:32 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 17:17:27 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int		ft_lennbr(long long d)
{
	int	len;
	long long	copy;

	copy = d;
	len = 1;
	while (copy /= 10)
		len++;
	return (len);
}
