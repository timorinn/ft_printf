/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:09:20 by bford             #+#    #+#             */
/*   Updated: 2019/09/30 17:31:12 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strjoinfree(char *s1, const char *s2, int size)
{
	char *fresh;
	char *copy;
	char *copy2;
	int len;

	len = (s1 ? ft_strlen(s1) : 0);
	if (!s2 || size < 0 ||
	!(fresh = ft_strnew(len + size)))
		return (NULL);
	copy = fresh;
	copy2 = s1;
	while (len--)
		*fresh++ = *s1++;
	ft_strdel(&copy2);
	while (*s2 && size--)
		*fresh++ = *s2++;
	return (copy);
}
