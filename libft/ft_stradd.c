/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 14:14:46 by bford             #+#    #+#             */
/*   Updated: 2019/10/01 14:14:07 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_stradd(char **ms, char c, int size)
{
	int		len;
	char	*copy;
	char	*copy2;

	copy = *ms;
	len = (*ms ? ft_strlen(*ms) : 0);
	if (!(*ms = ft_strnew(len + size)))
	{
		ft_strdel(&copy);
		return (NULL);
	}
	copy2 = *ms;
	while (copy && *copy)
		*copy2++ = *copy++;
	copy -= copy2 - (*ms);
	ft_strdel(&copy);
	while (size--)
		*copy2++ = c;
	return (*ms);
}
