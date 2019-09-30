/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 14:14:46 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 17:32:23 by bford            ###   ########.fr       */
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
	int		len;

	len = (ms ? ft_strlen(ms) : 0);
	cp1 = ms;
	if (!(fresh = ft_strnew(len + size)))
		return (NULL);
	cp2 = fresh;
	while (len--)
		*fresh++ = *ms++;
	ft_strdel(&cp1);
	while (size-- > 0)
		*fresh++ = c;
	return (cp2);
}
