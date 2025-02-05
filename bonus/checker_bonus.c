/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:30:21 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/04 21:35:19 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	execute_operation(char *op, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strcmp(op, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(op, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(op, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(op, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(op, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(op, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(op, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(op, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(op, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(op, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(op, "rrr\n"))
		rrr(stack_a, stack_b);
	else
		ft_error();
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*operation;

	operation = get_next_line(0);
	while (operation)
	{
		execute_operation(operation, stack_a, stack_b);
		free(operation);
		operation = get_next_line(0);
	}
	free(operation);
	if (is_sorted(*stack_a) == 1 && !(*stack_b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

int	main(int ac, char **av)
{
	int		i;
	char	**split;	
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		i = 1;
		check_all(ac, av);
		while (av[i])
		{
			split = ft_split(av[i], ' ');
			f_stack_a(&stack_a, split);
			i++;
			ft_free(split);
		}
		dap(&stack_a);
	}
	checker(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}
