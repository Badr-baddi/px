/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:20:31 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/02 23:24:14 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/push_swap_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*crnt;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		crnt = *lst;
		while (crnt->next != NULL)
		{
			crnt = crnt->next;
		}
		crnt->next = new;
	}
}
