/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:26:37 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/20 13:14:27 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	ft_swap(&a, &b);
	printf("%s%d%s%d", "a = ", a, "\nb = ", b);
}*/