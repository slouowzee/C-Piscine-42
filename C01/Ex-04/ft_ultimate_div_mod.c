/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:34:49 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/20 13:40:59 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%s%d%s%d", "a = ", a, "\nb = ", b);
}*/
