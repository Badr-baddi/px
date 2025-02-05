/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:40:45 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 17:51:19 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tow_nbr(t_list **stack_a)
{
	t_list	*index_node;

	indexing(stack_a);
	index_node = *stack_a;
	if (index_node->index == 1)
		sa(stack_a, 1);
}

void	sort_three_nbr(t_list **stack_a)
{
	t_list	*index_node;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next || !(*stack_a)->next->next)
		return ;
	indexing(stack_a);
	index_node = *stack_a;
	if (index_node->index == 0 && index_node->next->index == 2)
	{
		rra(stack_a, 1);
		sa(stack_a, 1);
	}
	else if (index_node->index == 1 && index_node->next->index == 0)
		sa(stack_a, 1);
	else if (index_node->index == 1 && index_node->next->index == 2)
		rra(stack_a, 1);
	else if (index_node->index == 2 && index_node->next->index == 0)
		ra(stack_a, 1);
	else if (index_node->index == 2 && index_node->next->index == 1)
	{
		ra(stack_a, 1);
		sa(stack_a, 1);
	}
}

void	sort_four_nbr(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
		check_small_nbr(stack_a, stack_b);
	sort_three_nbr(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	sort_all_nbr(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sort_tow_nbr(stack_a);
	else if (size == 3)
		sort_three_nbr(stack_a);
	else if (size == 4 || size == 5)
		sort_four_nbr(stack_a, stack_b);
	else if (size > 5)
		plus_five(stack_a, stack_b);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}
