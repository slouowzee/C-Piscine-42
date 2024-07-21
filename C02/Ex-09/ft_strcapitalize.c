/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:18:33 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/21 16:04:54 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 47) && (str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[]="les cacahuettes sont bonnes ? je crois";

	ft_strcapitalize(str);
	printf("%s", str);
}*/
