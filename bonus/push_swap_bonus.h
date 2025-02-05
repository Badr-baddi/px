/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:09:59 by bael-bad          #+#    #+#             */
/*   Updated: 2025/02/04 21:33:19 by bael-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

int		ft_strlen1(char *s);
int		ft_strlcpy(char *dst, char *src, int dstsize);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
char	**ft_split(char *s, char c);
void	ft_error(void);
void	ft_free(char **number);

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	check_all(int ac, char **av);
void	f_stack_a(t_list **stack_a, char **split);
void	dap(t_list **stack_a);
void	indexing(t_list **stack_a);
void	indexing2(t_list **stack_a);
void	sort_all_nbr(t_list **stack_a, t_list **stack_b);
void	check_small_nbr(t_list **stack_a, t_list **stack_b);
void	plus_five(t_list **stack_a, t_list **stack_b);
void	return_to_a(t_list **stack_a, t_list **stack_b);
int		find_max_position(t_list **stack);
void	push_in_b(t_list **stack_a, t_list **stack_b, int i, int range);
int		pourcentage(t_list	**stack_a);
int		is_sorted(t_list *stack_a);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *line, char *buff);
void	free_him(void *him);
void	execute_operation(char *op, t_list **stack_a, t_list **stack_b);

#endif
