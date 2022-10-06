CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Zombie
SRC = main.cpp zombieHorde.cpp Zombie.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
fclean:
	rm -f $(NAME)
re: fclean all