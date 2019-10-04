/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:10:55 by bford             #+#    #+#             */
/*   Updated: 2019/10/04 11:21:04 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

int		ft_putstr(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	*ft_strjoinfree(char *s1, const char *s2, int size);
char	*ft_stradd(char **ms, char c, int size);
char	*ft_strdup(char *src);
int		ft_strdel(char **as);

#endif
