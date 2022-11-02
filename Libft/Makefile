# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:18:49 by hugur             #+#    #+#              #
#    Updated: 2022/11/02 19:52:22 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HDRS = libft.h

SRC =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isempty.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c\
main.c
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