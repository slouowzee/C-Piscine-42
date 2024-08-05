/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:11:53 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/01 16:25:04 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	result;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	result = 0;
	if (size > len_d)
		result = len_s + len_d;
	else
		result = len_s + size;
	while (*src && len_d <= size)
	{
		dest[len_d] = *src;
		len_d++;
		src++;
	}
	dest[len_d] = '\0';
	return (result);
}

//#include <stdio.h>
//int main() {
// 	char destin[20] = "Hello";
//	char source[20] = ", world!";
//	unsigned int result = ft_strlcat(destin, source, 20);
//	printf("Result: %s\n", destin);
//	printf("Length: %d\n", result);
//	return (0);
//}