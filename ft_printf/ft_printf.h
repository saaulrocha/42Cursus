/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:19:23 by srocha-r          #+#    #+#             */
/*   Updated: 2023/05/29 10:27:18 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_print_perc(void);
int		ft_unsign_print(unsigned int n);
int		ft_hexa_print(unsigned int number, const char format);
int		ft_print_ptr(unsigned long long ptr);
void	ft_putchar_fd(char c, int fd);
int		ft_printnumber(int n);
#endif