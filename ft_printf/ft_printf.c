/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:23:49 by srocha-r          #+#    #+#             */
/*   Updated: 2023/04/26 10:32:36 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_parse_flags(char const *format, int *i, va_list args)
{
	char	flag;

	flag = format[*i];
	if (flag == 'c')
		ft_printchar(args);
	else if (flag == 's')
		ft_printstring(args);
	else if (flag == 'd' || flag == 'i')
		ft_print_int(args);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_parse_flags(format, &i, args);
		}
		else
		{
			ft_printchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
