/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:18:33 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/01 15:32:18 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	a_c(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (0);
	if (str >= 'a' && str <= 'z')
		return (1);
	if ((str <= 47 || str >= 58) && (str <= 64 || str >= 91) && str <= 96)
		return (2);
	if (str >= 123)
		return (2);
	else
		return (-1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 1;
	if (a_c(str[0]) == 1)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (a_c(str[i - 1]) == 2 && a_c(str[i]) == 1)
			str[i] -= 32;
		if (a_c(str[i - 1]) == 0 && a_c(str[i]) == 0)
			str[i] += 32;
		if (a_c(str[i - 1]) == 1 && a_c(str[i]) == 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[]="les 42ca?ahUettes{sOnt boNNes ?je crois";

	ft_strcapitalize(str);
	printf("%s", str);
}*/