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
	rm -f $(NAME) test *.out

re: fclean all

main: $(NAME)
	$(CC) $(FLAGS) -o test main.c $(NAME)


main1: $(NAME)
	$(CC) $(FLAGS) -o test main.c $(NAME) -D BUFFER_SIZE=1

main10: $(NAME)
	$(CC) $(FLAGS) -o test main.c $(NAME) -D BUFFER_SIZE=10

main1000000: $(NAME)
	$(CC) $(FLAGS) -o test main.c $(NAME) -D BUFFER_SIZE=1000000

.PHONY:
	all clean fclean re main

