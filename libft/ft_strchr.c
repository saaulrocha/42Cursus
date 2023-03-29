/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:03:22 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/13 13:35:57 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	sign;
	int	x;

	i = 0;
	sign = 0;
	x = (char)c;
	while (((char *)s)[i] != '\0' && sign == 0)
	{
		if (((char *)s)[i] == x)
		{
			return ((char *)&s[i]);
			sign = 1;
		}
		i++;
	}
	if (x == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
