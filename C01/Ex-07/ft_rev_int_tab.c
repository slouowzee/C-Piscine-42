/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:25:55 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/29 16:04:52 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	end = size - 1;
	start = 0;
	while (start < end)
	{
		temp = tab[end];
		tab[end] = tab[start];
		tab[start] = temp;
		start++;
		end--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};

	ft_rev_int_tab(tab, 10);
	
	int	i=0;
	while (i < 10)
	{
		printf("%i", tab[i]);
		i++;
	}
}*/
