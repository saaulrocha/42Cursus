/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:23:49 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/17 10:49:59 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_parse_flags(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == '%')
		len += ft_print_perc();
	else if (format == 'u')
		len += ft_unsign_print(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_hexa_print(va_arg(args, unsigned int), format);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_parse_flags(str[i + 1], args);
			i++;
		}
		else
		{
			len += ft_printchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
