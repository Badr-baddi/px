/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:16:15 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 17:17:42 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_stack_a(t_list **stack_a, char **split)
{
	int		i;
	int		new;
	t_list	*new_node;

	i = 0;
	new_node = NULL;
	while (split[i])
	{
		new = ft_atoi(split[i]);
		new_node = ft_lstnew(new);
		if (!new_node)
			return ;
		ft_lstadd_back(stack_a, new_node);
		i++;
	}
}
