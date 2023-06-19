/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:24:17 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:45:13 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
    printf("%c", ft_tolower('G'));
    printf("%c", tolower('H'));
    return (0);
}
*/
