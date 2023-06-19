/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:22:26 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/15 13:30:03 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return ((void *)p);
		n--;
	}
	return (NULL);
}
