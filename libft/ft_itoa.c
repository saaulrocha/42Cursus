/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:51:10 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/29 09:04:30 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *str, int number, int nbrs)
{
	while (number > 0)
	{
		str[nbrs--] = 48 + (number % 10);
		number = number / 10;
	}
	return (str);
}

static long int	ft_countdigits(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		nbrs;
	char	*str;
	int		sign;
	int		number;

	sign = 0;
	nbrs = ft_countdigits(n);
	if ((long)n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (nbrs + 1));
	if (!(str))
		return (NULL);
	str[nbrs--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign = -1;
		number = n * sign;
		str[0] = '-';
	}
	else
		number = n;
	str = ft_array(str, number, nbrs);
	return (str);
}
/*
int	main(void)
{
    int nb;

    nb = -2342342;
    printf("El string es %s", ft_itoa(nb));
    return (0);
}
*/