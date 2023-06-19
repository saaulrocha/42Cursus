/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:19:17 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/27 11:11:35 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[10];
	char	src[10];
	char	ft_dst[10];
	char	ft_src[10];
	size_t	n;

	dst[10] = "";
	src[10] = "world";
	ft_dst[10] = "";
	ft_src[10] = "world";
	n = 3;
	// Test ft_memcpy
	ft_memcpy(ft_dst, ft_src, n);
	printf("ft_memcpy: %s\n", ft_dst);
	// Test memcpy
	memcpy(dst, src, n);
	printf("memcpy: %s\n", dst);
	return (0);
}
*/
