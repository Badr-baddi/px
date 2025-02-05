/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 00:04:02 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/01 16:33:46 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_list **stack_a)
{
	t_list	*temp;
	t_list	*first;
	t_list	*variable;
	int		posission;

	first = *stack_a;
	variable = first;
	while (variable)
	{
		temp = first;
		posission = 0;
		while (temp)
		{
			if (variable->content > temp->content)
				posission += 1;
			temp = temp->next;
		}
		variable->index = posission;
		variable = variable->next;
	}
}
