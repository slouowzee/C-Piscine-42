/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpilet <gpilet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:02:16 by gpilet            #+#    #+#             */
/*   Updated: 2024/08/01 13:24:54 by gpilet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	max_ind(char *str, char *base)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_in_base(base, str[i]) == 0)
			return (i - 1);
		i++;
	}
	return (i);
}

int	check_errors(char *base)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (size <= 1)
		return (0);
	i = 0;
	while (i < size)
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	increment_nbr(char *base, char nb, long *nbr, int indice_nb)
{
	int	i;
	int	indice;
	int	j;
	int	res;

	i = 0;
	res = 1;
	j = 0;
	while (base[i])
	{
		if (nb == base[i])
			indice = i;
		i++;
	}
	if ((indice_nb) != 0)
	{
		while (j < indice_nb)
		{
			res = res * i;
			j++;
		}
	}
	*nbr = *nbr + (indice * res);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		len;
	long	nbr;

	sign = 0;
	nbr = 0;
	if (base == NULL || str == NULL || check_errors(base) == 0)
		return (0);
	while (*str == 32 || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign++;
	len = max_ind(str, base);
	while (is_in_base(base, *str) == 1 && *str)
	{
		increment_nbr(base, *str, &nbr, -1 + len--);
		str++;
	}
	if (sign % 2 == 0)
		return (nbr);
	return (-nbr);
}

/*#include <stdio.h>

int	main(void)
{
	printf("45:%d\n", ft_atoi_base("101101", "01"));
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}*/