/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:25:27 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/13 08:55:36 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	len = ft_strlen(src);
	if (dest != NULL && dstsize != 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	origen[20];

    char destino[20]= "hola";
    origen[20] = "";
    printf("%u", ft_strlcpy(destino, origen, 20));
    printf("%lu", strlcpy(destino, origen, 20));
    return (0);
}
*/
