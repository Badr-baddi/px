/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utilis_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 23:21:19 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 23:25:05 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	char_c;

	if (!s)
		return (0);
	str = (char *)s;
	char_c = (char)c;
	i = 0;
	if (!char_c)
		return (str + ft_strlen(str));
	while (s[i])
	{
		if (s[i] == char_c)
			return (str + i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *line, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!line)
	{
		line = (char *)malloc(1 * sizeof(char));
		if (!line)
			return (NULL);
		line[0] = '\0';
	}
	i = 0;
	j = 0;
	str = malloc(((ft_strlen(line) + ft_strlen(buff)) + 1) * sizeof(char));
	if (!str)
		return (free(line), NULL);
	while (line[i])
		str[j++] = line[i++];
	i = 0;
	while (buff[i])
		str[j++] = buff[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

void	free_him(void *him)
{
	if (him)
		free(him);
}
