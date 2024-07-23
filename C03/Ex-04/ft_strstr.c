/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:19:49 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/23 12:01:49 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	occu;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			occu = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					occu = 1;
				i++;
			}
			if (occu == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[]="cacahuette";
	char	to_find[]="hu";

	ft_strstr(str, to_find);
}*/
