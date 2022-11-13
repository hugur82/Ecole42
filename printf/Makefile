# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 21:54:34 by hugur             #+#    #+#              #
#    Updated: 2022/11/12 22:16:36 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = printf.c

OBJ = $(SRC:.c=.o)

AR = ar rc

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(FLAGS) -c $<

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rn -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re