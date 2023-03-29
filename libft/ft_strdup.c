/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:04:15 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/17 08:11:33 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *)malloc(i + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char str1[] = "15dsgsdgsdgds524gsgsgs";
	char *str2;
    char str3[] = "15dsgsdgsdgds524gsgsgs";
	char *str4;

	// duplica la cadena str1
	str2 = ft_strdup(str1);
    str4 = strdup(str3);

	// imprime las cadenas originales y duplicadas
	printf("Cadena original: %s\n", str1);
	printf("Cadena duplicada: %s\n", str2);
    printf("Cadena original strdup original: %s\n", str3);
	printf("Cadena duplicada strdup original: %s\n", str4);

	// libera la memoria asignada a la cadena duplicada
	free(str2);
    free(str4);

	return (0);
}
*/
