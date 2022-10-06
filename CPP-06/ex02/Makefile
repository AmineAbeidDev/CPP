CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Base.cpp main.cpp Irp.cpp
NAME = irp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all
