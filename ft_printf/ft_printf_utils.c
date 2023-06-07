/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:04:49 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/29 10:29:25 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_perc(void)
{
	write(1, "%", 1);
	return (1);
}
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

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
}


int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int		ft_printnumber(int n)
{
	int length;
	char *number;
	
	length = 0;
	number = ft_itoa(n);
	length = ft_printstr(number);
	free(number);
	return (length);
}
