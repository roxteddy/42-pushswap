#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/20 19:47:44 by mfebvay           #+#    #+#              #
#    Updated: 2015/02/03 21:40:06 by mfebvay          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all clean fclean re

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INC		= -I../libft
LIB		= -L../libft -lft

SRC		= 	pushswap.c check.c list.c moves.c push.c rot.c rotback.c solve.c \
			swap.c

OBJ		= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB) $(INC)

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all