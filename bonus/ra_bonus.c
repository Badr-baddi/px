/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:44:13 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 13:33:37 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	ra(t_list **stack_a)
{
	t_list	*top;
	t_list	*last;

	if (!*stack_a || (*stack_a)->next == NULL)
		return ;
	top = *stack_a;
	*stack_a = top->next;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = top;
	top->next = NULL;
}
