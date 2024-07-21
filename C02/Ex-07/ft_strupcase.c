/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:01:33 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/21 14:14:59 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[]="cacahuette";

	ft_strupcase(str);
	printf("%s", str);
}*/
