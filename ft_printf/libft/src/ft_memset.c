/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:04:24 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:44:18 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = b;
	while (len)
	{
		*(ptr) = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[50];

    str[50] = "432525343";
    printf("%s", ft_memset(str,'2', 5));
    printf("%s", memset(str, '2', 5));
    return (0);
}

ptr = str;
Esta línea establece el valor del puntero ptr
en el valor del argumento str,
que es un puntero al comienzo del bloque de
memoria que se va a establecer.
while (len)
{
    *(ptr++) = (unsigned char)c;
    len--;
} 
Estas líneas establecen el valor c en cada byte de memoria,
comenzando desde la dirección apuntada por ptr,
hasta que se han establecido len bytes.
La expresión *(ptr++) establece el valor de c
en el byte apuntado por ptr,
y luego incrementa ptr para que apunte al siguiente byte. */