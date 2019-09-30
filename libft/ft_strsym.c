/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsym.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:24:12 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 17:02:51 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include <stdlib.h>

//char	*ft_strsym(char **s, char c)
int		*ft_strsym(char **s, char c)
{
	/*
	char *copy;
	char *copy2;
	char *s2;
	char *ptr;

	if (!(*s) && !(*s = ft_strnew(0)))
		return (NULL);
	ptr = *s;
	copy2 = *s;
	if (!(s2 = ft_strnew(ft_strlen(*s) + 1)))
		return (NULL);
	copy = s2;
	while (*ptr)
		*s2++ = *ptr++;
	*s2 = c;
	ft_strdel(&copy2);
	return (copy);
	*/
	int		len;
	char	*new;
	int		i;

	i = 0;
	len = (*s ? ft_strlen(*s) : 0);
	if (!(new = ft_strnew(len + 1)))
	{
		if (*s)
			ft_strdel(s);
		return (0);
	}
	while ((*s)[i])
	{
		new[i] = (*s)[i];
		i++;
	}
	new[i] = c;
	*s = new;
	return (1);
}
