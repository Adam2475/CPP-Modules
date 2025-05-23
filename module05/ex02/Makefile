CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Bureaucrat
SRC = ./src/Bureaucrat.cpp ./src/main.cpp ./src/AForm.cpp \
		./src/PresidentialPardonForm.cpp ./src/RobotomyRequestForm.cpp ./src/ShrubberyCreationForm.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all