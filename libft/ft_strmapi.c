/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:33:25 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/22 08:57:13 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
char	test_func(unsigned int index, char c) {
    if (index % 2 == 0) {
        return (c + 1);
    } else {
        return (c - 1);
    }
}

int	main(void)
{
    char *str = "Hello, World!";
    char *new_str = ft_strmapi(str, &test_func);
    printf("Original string: %s\n", str);
    printf("New string: %s\n", new_str);
    free(new_str);
    return (0);
}
*/