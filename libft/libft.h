/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:10:55 by bford             #+#    #+#             */
/*   Updated: 2019/09/29 20:28:05 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	*ft_strjoinfree(char *s1, char const *s2, int size);
char	*ft_stradd(char *s, char c, int size);
char	*ft_strdup(char const *src);
int		ft_strdel(char **as);
char	*ft_strsym(char **s, char c);

#endif
