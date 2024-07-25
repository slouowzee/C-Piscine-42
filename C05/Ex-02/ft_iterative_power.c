/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:42:59 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/24 15:45:24 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_power(2, 4));
}*/
