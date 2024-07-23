/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:31:14 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/23 10:05:21 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[]="cacahuette";
	char	s2[]="maisonnettedetamere";
	unsigned int	n=3;

	ft_strncmp(s1, s2, n);
}*/
