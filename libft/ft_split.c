/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:38:14 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/24 14:13:23 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_create_split(char **split, char const *s, char c, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		split[i] = ft_substr(s, 0, ft_wordlen(s, c));
		if (!split[i])
		{
			while (i--)
				free(split[i]);
			free(split);
			return (NULL);
		}
		s += ft_wordlen(s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	split = ft_create_split(split, s, c, words);
	return (split);
}
/*
int main(void)
{
    char *test_string = "Hola 42 esto es<z<dvg u*¿?=)=()=n test.";
    char **split_result = ft_split(test_string, ' ');

    if (!split_result)
    {
        printf("Error: ft_split retorna NULL\n");
        return 1;
    }

    int i = 0;
    while (split_result[i])
    {
        printf("%s\n", split_result[i]);
        free(split_result[i]);
        i++;
    }

    free(split_result);

    return 0;
}
*/
