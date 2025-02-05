/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:19:23 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 13:42:32 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b || !stack_a || !*stack_a || !*stack_b)
		return ;
	sa(stack_a);
	sb(stack_b);
}
