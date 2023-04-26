/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:28:10 by srocha-r          #+#    #+#             */
/*   Updated: 2023/04/26 10:33:46 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(va_list args)
{
	int	num;
	int	len;

	num = va_arg(args, int);
	len = ft_numlen(num);
	ft_putnbr(num);
	return (len);
}
