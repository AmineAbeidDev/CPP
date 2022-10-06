CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Caster.cpp main.cpp
NAME = convert

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all