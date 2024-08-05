/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:44:23 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/04 17:01:33 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	read_number(char *number_str, size_t size)
{
	int	len;

	len = read(0, number_str, size - 1);
	if (len > 0)
		number_str[len - 1] = '\0';
}
