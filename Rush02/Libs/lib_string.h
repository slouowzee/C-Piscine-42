/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: favalett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:41:51 by favalett          #+#    #+#             */
/*   Updated: 2024/08/04 16:42:10 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_STRING_H
# define LIB_STRING_H

# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_write(const char *str);
void	ft_strncpy(char *dest, const char *src, size_t n);
char	ft_strcpy(char *dest, char *src);

#endif
