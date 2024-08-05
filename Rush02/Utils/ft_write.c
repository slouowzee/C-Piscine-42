/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:37:43 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/04 16:59:51 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libs/lib_string.h"
#include "../libs/lib_arg1.h"

void	ft_write(const char *str)
{
	write(1, str, ft_strlen(str));
}
