/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:26:58 by gpilet            #+#    #+#             */
/*   Updated: 2024/07/18 15:43:50 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 'z';
	while (lettre > 'a' - 1)
	{
		write(1, &lettre, 1);
		lettre--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
