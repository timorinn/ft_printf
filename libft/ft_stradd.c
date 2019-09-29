/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 14:14:46 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 21:26:22 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_stradd(char *ms, char c, int size)
{
	char	*fresh;
	char	*cp1;
	char	*cp2;
	
	cp1 = ms;
	if (!(fresh = ft_strnew(ft_strlen(ms) + size)))
		return (NULL);
	cp2 = fresh;
	while (*ms)
		*fresh++ = *ms++;
	ft_strdel(&cp1);
	while (size-- > 0)
		*fresh++ = c;
	return (cp2);
}
