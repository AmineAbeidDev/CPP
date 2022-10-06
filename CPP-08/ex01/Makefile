CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Span.cpp
NAME = span

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all