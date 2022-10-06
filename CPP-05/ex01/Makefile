CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Form.cpp GradeTooHighException.cpp GradeTooLowException.cpp Bureaucrat.cpp 
NAME = Bureau

all: $(NAME)
$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all