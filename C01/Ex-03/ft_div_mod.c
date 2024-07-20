/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:17:23 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/20 13:33:38 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	a = 15;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%s%d%s%d", "div = ", div, "\nmod = ", mod);
}*/
