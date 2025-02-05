/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:09:50 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/03 17:30:37 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	char	**split;	
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac > 1)
	{
		i = 1;
		stack_a = NULL;
		stack_b = NULL;
		check_all(ac, av);
		while (av[i])
		{
			split = ft_split(av[i], ' ');
			f_stack_a(&stack_a, split);
			i++;
			ft_free(split);
		}
		dap(&stack_a);
		sort_all_nbr(&stack_a, &stack_b);
	}
}
