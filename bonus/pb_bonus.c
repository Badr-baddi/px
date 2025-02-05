/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 01:48:33 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 21:11:54 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*top_a;

	if (!stack_a || !(*stack_a))
		return ;
	top_a = *stack_a;
	*stack_a = top_a->next;
	top_a->next = *stack_b;
	*stack_b = top_a;
}
