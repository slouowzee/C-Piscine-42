/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:16:03 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/21 14:16:53 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[]="CACAHUETTE";

	ft_strlowcase(str);
	printf("%s", str);
}*/
