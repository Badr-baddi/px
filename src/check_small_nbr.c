/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_small_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:55:40 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 17:52:10 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

int	check_one_nbr(t_list **stack_a)
{
	t_list	*nbr;
	int		small_nbr;
	int		min;

	min = INT_MAX;
	nbr = *stack_a;
	while (nbr)
	{
		if (nbr->content <= min)
		{
			min = nbr->content;
			small_nbr = nbr->content;
		}
		nbr = nbr->next;
	}
	return (small_nbr);
}

int	find_small_nbr_index(t_list **stack_a, int small_nbr)
{
	t_list	*nodes;
	int		index;

	index = 0;
	nodes = *stack_a;
	while (nodes)
	{
		if (nodes->content == small_nbr)
			break ;
		index++;
		nodes = nodes->next;
	}
	return (index);
}

void	move_small_nbr_top(t_list **stack_a, int index)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (index <= size / 2)
	{
		while (index--)
			ra(stack_a, 1);
	}
	else
	{
		index = size - index;
		while (index--)
			rra(stack_a, 1);
	}
}

void	check_small_nbr(t_list **stack_a, t_list **stack_b)
{
	int	small_nbr;
	int	index;

	small_nbr = check_one_nbr(stack_a);
	index = find_small_nbr_index(stack_a, small_nbr);
	move_small_nbr_top(stack_a, index);
	pb(stack_a, stack_b);
}
