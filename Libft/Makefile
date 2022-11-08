# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:18:49 by hugur             #+#    #+#              #
#    Updated: 2022/11/08 14:40:56 by hugur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HDRS = libft.h

SRC =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c\
ft_isdigit.c ft_isempty.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\

# $(wildcard *.c)

OBJ = $(SRC:.c=.o)

AR = ar rc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME):$(OBJ)
	$(AR) $(@) $^
	
%.o : %.c
	$(CC) -c $<

all: $(NAME)

clean:
	$(RM) *.o 

fclean: clean
	$(RM) $(NAME) *.out

re: fclean go

go: all
	gcc $(FLAGS) -o test.out  main.c $(NAME) && ./test.out \
	# output:\
	
	make fclean

.PHONY:
	all clean fclean re