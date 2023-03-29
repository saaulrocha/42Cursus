/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:45:11 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/22 08:28:09 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count > 0 && size > 0 && SIZE_MAX / count < size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int	main(void)
{
    char *str1, *str2;
    str1 = calloc(10, sizeof(char));
    str2 = ft_calloc(10, sizeof(char));
    if (str1 == NULL || str2 == NULL)
        return (-1);
    if (strcmp(str1, str2) == 0)
        printf("ft_calloc y calloc son iguales.\n");
    else
        printf("ft_calloc y calloc no son iguales.\n");
    free(str1);
    free(str2);
    return (0);
}
*/
