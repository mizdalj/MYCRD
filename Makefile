CC	= gcc
NAME	= ./Release/my_crd
SRC	= ./libmy/my_str_to_word_array.c	\
	  ./libmy/my_putchar.c	\
	  ./libmy/my_putstr.c	\
	  ./libmy/my_crd.c	\
	  ./libmy/my_push_to_list.c	\
	  ./libmy/my_getnbr.c	\
	  ./libmy/my_putnbr.c	\
	  ./libmy/my_search.c	\
	  ./libmy/my_delete.c	\
	  main.c

OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
FLAGS = -Wall -Wextra -Werror -std=c11

$(NAME):		$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(FLAGS)
All:		$(NAME)

clean:
	 $(RM) $(OBJ)

fclean:		clean
	 $(RM) $(NAME)

re:	 fclean All
