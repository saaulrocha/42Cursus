/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:11:40 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/17 10:29:03 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_len(unsigned int number)
{
	int	i;

	i = 0;
	while (number != 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*number;
	int		i;

	i = ft_int_len(n);
	number = (char *)malloc(sizeof(char) * (i + 1));
	if (!number)
		return (number);
	number[i] = '\0';
	while (n != 0)
	{
		number[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (number);
}

int	ft_unsign_print(unsigned int n)
{
	int		length;
	char	*number;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		number = ft_uitoa(n);
		length += ft_printstr(number);
		free(number);
	}
	return (length);
}
