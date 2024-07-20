/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:45:17 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/18 16:19:12 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	left;
	char	mid;
	char	right;

	left = '0';
	while (left <= '7')
	{
		mid = left + 1;
		while (mid <= '8')
		{
			right = mid + 1;
			while (right <= '9')
			{
				write(1, &left, 1);
				write(1, &mid, 1);
				write(1, &right, 1);
				if (left != '7' || mid != '8' || right != '9')
					write(1, ", ", 2);
				right++;
			}
			mid++;
		}
		left++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
