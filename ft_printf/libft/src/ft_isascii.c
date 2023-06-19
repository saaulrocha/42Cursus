/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:59:43 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:54:22 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    printf("%d", ft_isascii(256));
    printf("%d", isascii(256));
}
*/