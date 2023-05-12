/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:18:00 by srocha-r          #+#    #+#             */
/*   Updated: 2023/04/28 12:06:38 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_gnl_aux(int fd, char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *new_str, char *buff);
size_t	ft_strlen(char *s);
char	*ft_getfirst_line(char *new_str);
char	*ft_new_str(char *new_str);

#endif