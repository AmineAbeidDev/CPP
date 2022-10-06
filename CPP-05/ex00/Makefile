CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Bureaucrat.cpp main.cpp GradeTooHighException.cpp GradeTooLowException.cpp
NAME = Bureau

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all