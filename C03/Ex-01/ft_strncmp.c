/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:31:14 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/22 16:01:09 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0') && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[]="cacahuette";
	char	s2[]="maisonnettedetamere";
	unsigned int	n=3;

	ft_strcmp(s1, s2, n);
}*/
