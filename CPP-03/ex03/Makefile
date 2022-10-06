CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
NAME = ClapTrap

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all