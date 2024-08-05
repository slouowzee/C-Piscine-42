/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:38:35 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/01 15:12:36 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (size <= 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (j);
}

/*#include <stdio.h>
int main()
{
  char str[] = "testtesttest";
  char strDest[] = "test";
  int r = ft_strlcpy(strDest, str, 4);

  printf("%s\n", strDest);
  printf("%d", r);
}*/