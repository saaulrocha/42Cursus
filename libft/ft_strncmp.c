/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:59:21 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:51:12 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if ((i != n))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
int	main(void)
{
	char	str[];
	char	str2[];

    str[] = "432";
    str2[] = "hola";
	printf("%d:%d", ft_strncmp(str, str2, 5), strncmp(str, str2, 5));
}
*/
