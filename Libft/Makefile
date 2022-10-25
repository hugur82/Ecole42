# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:18:49 by hugur             #+#    #+#              #
#    Updated: 2022/10/25 12:27:19 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HDRS = libft.h

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c

OBJ = $(SRC:.c=.o)

AR = ar rc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(CC) $(FLAGS) $(OBJ)
	
all: $(NAME)

clean:
	$(RM) *.o 

fclean: clean
	$(RM) $(NAME) *.out

re: fclean all 

.PHONY:
	all clean fclean re