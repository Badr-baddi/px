/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_b_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:00:08 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 13:48:21 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

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
			rb(stack_b);
			i++;
		}
		else if (pourcentage(stack_a))
			rra(stack_a);
		else
			ra(stack_a);
	}
}
