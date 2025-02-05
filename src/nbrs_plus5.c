/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrs_plus5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:02:47 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 16:38:14 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pourcentage(t_list	**stack_a)
{
	t_list	*node;
	int		count;
	int		len;

	len = 0;
	count = 0;
	node = *stack_a;
	while (node && node->next)
	{
		len = node->content - node->next->content;
		if (len == 2 || len == 3 || len == 4)
			count++;
		node = node->next;
	}
	if (count >= 15 && count < 499)
		return (1);
	return (0);
}

int	range_of_nodes(t_list **stack_a)
{
	int	range;
	int	size;

	size = ft_lstsize(*stack_a);
	range = 0;
	if (size > 100)
		range = 33;
	else if (size <= 100)
		range = 16;
	return (range);
}

void	befor_push_in_a(int position, int len, t_list **stack_b)
{
	if (position <= (len / 2))
	{
		while (position > 0)
		{
			rb(stack_b, 1);
			position--;
		}
	}
	else
	{
		while (position != len)
		{
			rrb(stack_b, 1);
			position++;
		}
	}
}

void	return_to_a(t_list **stack_a, t_list **stack_b)
{
	int		len;
	int		position;
	int		max_index;
	t_list	*node;

	indexing(stack_b);
	while (*stack_b != NULL)
	{
		position = 0;
		len = ft_lstsize(*stack_b);
		max_index = len - 1;
		node = *stack_b;
		while (node->index != max_index)
		{
			position++;
			node = node->next;
		}
		len = ft_lstsize(*stack_b);
		befor_push_in_a(position, len, stack_b);
		pa(stack_a, stack_b);
	}
}

void	plus_five(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	range;

	i = 0;
	j = 0;
	range = range_of_nodes(stack_a);
	indexing(stack_a);
	push_in_b(stack_a, stack_b, i, range);
	return_to_a(stack_a, stack_b);
}
