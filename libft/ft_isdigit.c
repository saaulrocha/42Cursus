/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:11:16 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/10 09:44:55 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nbr)
{
	if (nbr >= '0' && nbr <= '9')
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isdigit('A'));
	printf("%d", isdigit('A'));
	return (0);
}
*/
