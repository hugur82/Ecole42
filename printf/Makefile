# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 21:54:34 by hugur             #+#    #+#              #
#    Updated: 2022/11/17 16:03:36 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRINC = ./includes/

DIRSRC = ./srcs/

DIRLIB = ./libft/

NAME = libftprintf.a

NAMELFT = libft.a

SRC = ft_printf ft_handlestringinteger

SRCS = $(addprefix ${DIRSRC}, $(addsuffix .c , ${SRC}))

OBJ = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

AR = ar rc

RN = ranlib

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $< 


$(NAME): $(OBJ)
	cd $(DIRLIB) && $(MAKE) && cp $(NAMELFT) ../$(NAME)
	${AR} ${NAME} $^
	${RN} ${NAME} 

all: $(NAME)

clean:
	rm -f $(OBJ)
	cd $(DIRLIB) && $(MAKE) clean

fclean: clean
	rm -f $(NAME) 
	cd $(DIRLIB) && $(MAKE) fclean

re: fclean all

main:	$(NAME)
	$(CC) main.c $(NAME)

.PHONY:
	all clean fclean re