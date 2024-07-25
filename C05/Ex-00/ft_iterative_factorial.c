/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:17:22 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/24 13:50:42 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	result;

	fact = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (fact <= nb)
	{
		result *= fact;
		fact++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}*/
