NAME = nn

C = src/main.c src/activationfunctions.c

FLAGS = -Wall -Wextra

IN = libft/libft.a

all: $(NAME)

$(NAME):
	@make -C libft/
	gcc $(C) -o $(NAME) $(FLAGS) -I $(IN)

clean:
	@make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all

.PHONY: clean fclean all re