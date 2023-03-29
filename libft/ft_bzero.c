/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:39:35 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:44:32 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*
El puntero void s se convierte en un puntero char usando (char *)s.
Luego, se accede al elemento i del bloque de memoria utilizando [(char *)s][i].
Finalmente, se establece el valor del elemento i en cero.
*/