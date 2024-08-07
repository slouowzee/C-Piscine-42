/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysaindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 05:02:09 by rysaindo          #+#    #+#             */
/*   Updated: 2024/07/21 17:33:06 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x))
				ft_putchar ('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar ('\\');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				ft_putchar ('*');
			else
				ft_putchar (' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
