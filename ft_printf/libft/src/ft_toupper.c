/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:20:23 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:45:16 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    printf("%c", ft_toupper('g'));
    printf("%c", toupper('g'));
    return (0);
}
*/