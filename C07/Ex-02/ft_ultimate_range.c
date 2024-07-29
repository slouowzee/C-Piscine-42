/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:41:58 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/29 10:23:32 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tmp = malloc(sizeof(int) * (max - min));
	if (tmp == NULL)
		return (-1);
	while (i <= (max - min))
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (i - 1);
}

/*#include <stdio.h>

int	main(void)
{
	int *range;

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
}*/
