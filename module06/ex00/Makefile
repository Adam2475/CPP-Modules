CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Converter
SRC = ./src/ScalarConverter.cpp ./src/main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all