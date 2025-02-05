/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:20:38 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/01 20:53:28 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack_b, int flag)
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
	if (flag == 1)
		write(1, "rb\n", 3);
}
