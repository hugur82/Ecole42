# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:18:49 by hugur             #+#    #+#              #
#    Updated: 2022/10/27 14:13:38 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HDRS = libft.h

SRC =  ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_memset.c ft_strncmp.c\
ft_strchr.c ft_bzero.c main.c
# $(wildcard *.c)

OBJ = $(SRC:.c=.o)

AR = ar rc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME):$(OBJ)
	$(AR) $(@) $^
	$(CC) $(FLAGS) $^
	
%.o : %.c
	$(CC) -o $@ -c $<

all: $(NAME)

clean:
	$(RM) *.o 

fclean: clean
	$(RM) $(NAME) *.out

re: fclean all 

.PHONY:
	all clean fclean re