/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:19:23 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/01 20:59:36 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b || !stack_a || !*stack_a || !*stack_b)
		return ;
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss\n", 3);
}
