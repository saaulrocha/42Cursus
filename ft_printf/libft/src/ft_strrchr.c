/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:37:54 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/15 10:47:06 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		x;
	char	*str2;

	i = ft_strlen(s);
	x = (char)c;
	str2 = (char *)s;
	while (i >= 0)
	{
		if (str2[i] == x)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (x == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*src;

	src = "teste";
	printf("%s", strrchr(src, 101));
	printf("%s", ft_strrchr(src, 101));
	return (0);
}
*/