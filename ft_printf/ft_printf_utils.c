/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:04:49 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/12 12:48:50 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_perc()
{
	write(1, "%", 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_printstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_printchar('-');
		n = n * -1;
		len++;
	}
	if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
	{
		ft_printchar(n + '0');
		len++;
	}
	return (len);
}
