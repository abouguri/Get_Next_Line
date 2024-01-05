/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:59:44 by abouguri          #+#    #+#             */
/*   Updated: 2024/01/05 18:15:26 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(char *src, int c)
{
	if (!src)
		return (NULL);
	while (*src != '\0')
	{
		if (*src == (char)c)
			return (src);
		src++;
	}
	if (c == '\0')
		return (src);
	return (0);
}

char	*ft_read_line(char *src)
{
	int		i;
	int		length;
	char	*line;

	length = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[length] && src[length] != '\n')
		length++;
	line = malloc(length + 2);
	if (!line)
		return (NULL);
	while (i < length)
	{
		line[i] = src[i];
		i++;
	}
	if (src[length] == '\n')
		line[length++] = '\n';
	line[length] = '\0';
	return (line);
}

char	*ft_save_after_nl(char *src)
{
	int		nl_index;
	int		j;
	char	*str;

	nl_index = 0;
	while (src[nl_index] != '\0' && src[nl_index] != '\n')
		nl_index++;
	if (src[nl_index] == '\0')
	{
		free(src);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) - nl_index + 1));
	if (str == NULL)
		return (NULL);
	nl_index = nl_index + 1;
	j = 0;
	while (src[nl_index] != '\0')
		str[j++] = src[nl_index++];
	str[j] = '\0';
	free(src);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[j] != '\0')
		str[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}
