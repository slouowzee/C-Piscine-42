/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:30:47 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/01 16:00:37 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_hex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

//void	ft_putstr(char *str)
//{
//	int l;

//	l = 0;
//	while (str[l])
//	{
//		l++;
//	}
//	write(1, str, l);
//}

//int		main()
//{
//	char c[] = "Coucou\ntu vas bien ?";
//	ft_putstr("Coucou\\0atu vas bien ?:");
//	ft_putstr_non_printable(c);
//	char d[] = "\x81\xbe";
//	ft_putstr("\n\\81\\be:");
//	ft_putstr_non_printable(d);
//}