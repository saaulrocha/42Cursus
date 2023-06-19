/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:24:51 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:44:42 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    printf("%d", ft_isalnum('0'));
    printf("%d", isalnum('0'));
    return (0);
}
*/