/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:10:22 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 18:39:11 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	dap(t_list **stack_a)
{
	t_list	*temp;
	t_list	*check;

	temp = *stack_a;
	while (temp)
	{
		check = temp->next;
		while (check)
		{
			if (check->content == temp->content)
			{
				ft_lstclear(stack_a);
				ft_error();
			}
			check = check->next;
		}
		temp = temp->next;
	}
}
