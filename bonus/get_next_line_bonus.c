/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 23:20:07 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 23:23:44 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

char	*next_line(char *stockage)
{
	char	*new_stockage;
	int		i;
	int		j;

	i = 0;
	if (!stockage || !*stockage)
		return (NULL);
	while (stockage[i] && stockage[i] != '\n')
		i++;
	if (stockage[i] == '\n')
		i++;
	new_stockage = malloc(sizeof(char) * ((ft_strlen(stockage) - i) + 1));
	if (!new_stockage)
		return (free(stockage), NULL);
	j = 0;
	while (stockage[i])
		new_stockage[j++] = stockage[i++];
	new_stockage[j] = '\0';
	free(stockage);
	return (new_stockage);
}

char	*check_stockage(char *stockage)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (stockage[i] && stockage[i] != '\n')
		i++;
	if (stockage[i] == '\n')
		i++;
	if (i == 0 && stockage[i] == '\0')
		return (NULL);
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = stockage[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*ft_get_line(int fd)
{
	char	*line;
	char	*buffer;
	ssize_t	i;

	line = NULL;
	buffer = malloc((ssize_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	i = 1;
	while (i > 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
			return (free_him(buffer), free_him(line), NULL);
		if (i == 0)
			break ;
		buffer[i] = '\0';
		if (buffer)
			line = ft_strjoin(line, buffer);
		if (!line)
			return (free_him(buffer), NULL);
	}
	free_him(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stockage;
	char		*nle;

	if (read(fd, NULL, 0) == -1)
		return (free(stockage), stockage = NULL);
	if (BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (free(stockage), stockage = NULL);
	if (!stockage)
		stockage = ft_get_line(fd);
	if (!stockage)
		return (free(stockage), stockage = NULL);
	nle = check_stockage(stockage);
	if (!nle)
		return (free(stockage), stockage = NULL, NULL);
	stockage = next_line(stockage);
	return (nle);
}
