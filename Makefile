# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bael-bad <bael-bad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 17:16:27 by bael-bad          #+#    #+#              #
#    Updated: 2025/02/03 20:40:53 by bael-bad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = /mnt/homes/bael-bad/Desktop/cheker/src/push_swap.h

HEADER_BONUS = /mnt/homes/bael-bad/Desktop/cheker/bonus/push_swap_bonus.h

SRCS = src/algo.c src/check_small_nbr.c src/ft_atoi.c src/ft_error.c src/ft_lstadd_back.c src/ft_lstclear.c src/ft_lstnew.c\
		src/ft_lstsize.c src/ft_split.c src/ft_strcmp.c src/ft_strlen.c src/indexing.c src/push_swap.c src/nbrs_plus5.c src/pa.c src/parsing1.c\
		src/parsing2.c src/pb.c src/push_in_b.c src/ra.c src/rb.c src/rr.c src/rra.c src/rrr.c src/sa.c src/sb.c src/ss.c src/rrb.c\

SRCS_BONUS = bonus/algo_bonus.c bonus/check_small_nbr_bonus.c bonus/ft_atoi_bonus.c bonus/ft_error_bonus.c bonus/ft_lstadd_back_bonus.c bonus/ft_lstclear_bonus.c bonus/ft_lstnew_bonus.c bonus/is_sorted_bonus.c bonus/get_next_line_bonus.c bonus/get_next_line_utilis_bonus.c\
		bonus/ft_lstsize_bonus.c bonus/ft_split_bonus.c bonus/ft_strcmp_bonus.c bonus/ft_strlen_bonus.c bonus/indexing_bonus.c bonus/checker_bonus.c bonus/nbrs_plus5_bonus.c bonus/pa_bonus.c bonus/parsing1_bonus.c\
		bonus/parsing2_bonus.c bonus/pb_bonus.c bonus/push_in_b_bonus.c bonus/ra_bonus.c bonus/rb_bonus.c bonus/rr_bonus.c bonus/rra_bonus.c bonus/rrr_bonus.c bonus/sa_bonus.c bonus/sb_bonus.c bonus/ss_bonus.c bonus/rrb_bonus.c\

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME_BONUS = checker


all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c HEADER
	$(CC) $(CFLAGS) -c $< -o $@


bonus/%.o : bonus/%.c HEADER_BONUS
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all
