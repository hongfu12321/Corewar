# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 18:11:36 by mjacques          #+#    #+#              #
#    Updated: 2019/04/12 14:44:47 by mjacques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
RM				= rm -f
NAME			= asm
CFLAGS			= -Wall -Wextra -Werror

LIBFT           = ../libft/libft.a

INCLUDES		= -I includes\
				  -I ../libft/includes

BASE 			= ft_asm.c ft_file_struct.c ft_file_maker.c ft_line_size.c
OP_CODE			= ft_print_op.c ft_print_op_helper.c
ERROR			= ft_error.c

FUNCTIONS		= $(BASE) $(ERROR) $(OP_CODE)
FILES 			= $(addprefix srcs/, $(FUNCTIONS))
OBJECTS			= $(FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	@make -C ../libft

$(NAME): $(LIBFT) $(OBJECTS)
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS) $(LIBFT)

clean:
	@$(RM) $(OBJECTS)
	@make clean -C ../libft

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ../libft

re: fclean all
