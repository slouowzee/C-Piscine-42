/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:19:49 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/22 17:28:07 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			return (to_find);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[]="cacahuette";
	char	to_find[]="a";

	ft_strstr(str, to_find);
}*/
