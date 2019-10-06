/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 12:10:55 by bford             #+#    #+#             */
/*   Updated: 2019/10/06 17:56:56 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_putstr(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
char	*ft_stradd(char **ms, char c, int size);
char	*ft_strdup(char *src);
int		ft_strdel(char **as);
char	*ft_strchr(const char *s, int c);
int		ft_putstr_num(const char *s, int n);

#endif
