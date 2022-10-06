CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
NAME = whatever

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all