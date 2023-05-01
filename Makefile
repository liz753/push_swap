# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 16:46:05 by lfrank            #+#    #+#              #
#    Updated: 2023/03/13 16:40:09 by lfrank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra -g 

RM			= rm -f 

LIB			= ./libs/libft/libft.a

MAKE_LIBFT	= cd ./libs/libft && make

CLEAR_LIBFT	= cd ./libs/libft && make fclean

SRC			= ./src/ft_push_swap.c ./src/ft_error.c ./src/ft_sort_small_list.c \
			./src/ft_sort_big_list.c ./src/ft_utils.c ./src/ft_parsing.c \
			./src/ft_linked_list.c ./src/ft_moves_p.c ./src/ft_moves_s.c \
			./src/ft_moves_r.c ./src/ft_moves_rr.c ./src/ft_operations.c \
			./src/ft_free.c 

OBJS 		= ${SRC:%.c=%.o}

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(MAKE_LIBFT)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME)

clean	: 
	@$(MAKE)  -C ./libs/libft clean
	$(RM) $(OBJS)

fclean	: clean
	@$(MAKE) -C ./libs/libft fclean
	$(RM) $(NAME)

re		: fclean all