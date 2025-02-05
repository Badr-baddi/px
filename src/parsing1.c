/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:09:39 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 17:57:23 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_only_digit(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '+' || num[i] == '-')
	{
		i++;
		if (num[i] == '\0')
			ft_error();
	}
	while (num[i])
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	check_double_signe(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if ((num[i] == '+' || num[i] == '-')
			&& (num[i + 1] == '-' || num[i + 1] == '+'))
			return (0);
		i++;
	}
	return (1);
}

int	check_space(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if ((num[i] == '+' || num[i] == '-') && (num[i + 1] == ' '))
			return (0);
		i++;
	}
	return (1);
}

void	number_valid(char *num)
{
	char	**number;
	int		i;

	if (*num == '\0')
		ft_error();
	number = ft_split(num, ' ');
	if (!number)
		ft_error();
	i = 0;
	while (number[i])
	{
		if (!check_only_digit(number[i])
			|| !check_space(number[i])
			|| !check_double_signe(number[i]))
			ft_error();
		i++;
	}
	ft_free(number);
}

void	check_all(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (ft_strcmp(av[i], " ") == 0)
				ft_error();
			number_valid(av[i]);
			i++;
		}
	}
	else
		ft_error();
}
