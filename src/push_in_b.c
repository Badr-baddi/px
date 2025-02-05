/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:00:08 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/01 20:50:05 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_in_b(t_list **stack_a, t_list **stack_b, int i, int range)
{
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + range))
		{
			pb(stack_a, stack_b);
			rb(stack_b, 1);
			i++;
		}
		else if (pourcentage(stack_a))
			rra(stack_a, 1);
		else
			ra(stack_a, 1);
	}
}
