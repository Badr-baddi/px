/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:20:38 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 13:37:36 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	rb(t_list **stack_b)
{
	t_list	*top;
	t_list	*bott;

	if (!*stack_b || (*stack_b)->next == NULL)
		return ;
	top = *stack_b;
	*stack_b = top->next;
	bott = *stack_b;
	while ((bott)->next)
		bott = bott->next;
	bott->next = top;
	top->next = NULL;
}
