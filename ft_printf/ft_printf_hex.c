/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:31:53 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/17 10:55:37 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}

int	ft_length_hex(unsigned int number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		i++;
		number = number / 16;
	}
	return (i);
}

void	ft_hex_put(unsigned int number, const char format)
{
	if (number >= 16)
	{
		ft_hex_put(number / 16, format);
		ft_hex_put(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd((number + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((number - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((number - 10 + 'A'), 1);
		}
	}
}

int	ft_hexa_print(unsigned int number, const char format)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		ft_hex_put(number, format);
	return (ft_length_hex(number));
}
