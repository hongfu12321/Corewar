# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarney <mcarney@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/29 10:41:39 by mcarney           #+#    #+#              #
#    Updated: 2019/04/12 14:45:03 by mjacques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
RM				= rm -f
NAME			= corewar
CFLAGS			= -Wall -Wextra -Werror

API				= -lncurses
LIBFT           = ../libft/libft.a

INCLUDES		= -I includes\
				  -I ../libft/includes

BASE			= main.c arena.c ft_decode.c ft_functions.c
PLAYER			= new_player.c processes.c
VISUALIZER		= visualizer.c
EXECUTION		= ft_execute_0x04.c ft_execute_0x09.c\
				  ft_execute_0x0e.c ft_execute_0x10.c

FUNCTIONS		= $(BASE) $(EXECUTION) $(PLAYER) $(VISUALIZER)
FILES 			= $(addprefix srcs/, $(FUNCTIONS))
OBJECTS			= $(FILES:.c=.o)

.PHONY: all $(NAME) clean fclean re

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	@make -C ../libft

$(NAME): $(LIBFT) $(OBJECTS)
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS) $(API) $(LIBFT)

clean:
	@$(RM) $(OBJECTS)
	@make clean -C ../libft

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ../libft

re: fclean all
