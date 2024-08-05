/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proc_seg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:47:45 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/04 17:02:29 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libs/lib_string.h"
#include "../libs/lib_arg1.h"

void	process_segment(int number, char *buffer,
			size_t *len, const char *suffix)
{
	if (number > 0)
	{
		convert_hundreds(number, buffer, len);
		if (suffix && ft_strlen(suffix) > 0)
		{
			append_to_buffer(buffer, len, " ");
			append_to_buffer(buffer, len, suffix);
		}
	}
}
