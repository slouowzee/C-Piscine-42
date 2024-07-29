/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:09:10 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/29 14:28:51 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_getnb(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nb > 9)
	{
		i = nb / 10;
		j = nb % 10;
		ft_putchar(i + '0');
		ft_putchar(j + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_getnb(first);
			ft_putchar(' ');
			ft_getnb(second);
			if (first < 98 || second < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
