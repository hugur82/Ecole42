CC = gcc

FLAGS = -Wall -Werror -Wextra

NAME = libgnl.a

SRC = get_next_line get_next_line_utils

SRCS = $(addsuffix .c, $(SRC))

OBJ = $(SRCS:.c=.o)

AR = ar rc

RN = ranlib

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $^
	${RN} ${NAME} 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean all

main: $(NAME)
	$(CC) -o test main.c $(NAME)

.PHONY:
	all clean fclean re

