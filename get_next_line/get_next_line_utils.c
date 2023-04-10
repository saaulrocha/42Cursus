/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:18:05 by srocha-r          #+#    #+#             */
/*   Updated: 2023/04/10 14:23:17 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *new_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!new_str)
	{
		new_str = (char *)malloc(1 * sizeof(char));
		new_str[0] = '\0';
	}
	if (!new_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(new_str) + ft_strlen(buff)) + 1));
	i = -1;
	j = 0;
	if (new_str)
		while (new_str[++i] != '\0')
			str[i] = new_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(new_str) + ft_strlen(buff)] = '\0';
	free(new_str);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_getfirst_line(char *new_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!new_str[i])
		return (NULL);
	while (new_str[i] && new_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (new_str[i] && new_str[i] != '\n')
	{
		str[i] = new_str[i];
		i++;
	}
	if (new_str[i] == '\n')
	{
		str[i] = new_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_str(char *new_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (new_str[i] && new_str[i] != '\n')
		i++;
	if (!new_str[i])
	{
		free(new_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(new_str) - i));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (new_str[i])
		str[j++] = new_str[i++];
	str[j] = '\0';
	free(new_str);
	return (str);
}
