CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = human
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
fclean:
	rm -f $(NAME)
re: fclean all
