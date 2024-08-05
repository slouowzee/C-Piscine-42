/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:08:35 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/04 16:45:02 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libs/lib_string.h"
#include "../libs/lib_arg1.h"

void	append_to_buffer(char *buffer, size_t *len, const char *str)
{
	while (*str)
		buffer[(*len)++] = *str++;
}
