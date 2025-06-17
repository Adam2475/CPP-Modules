CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Base
SRC = ./src/Base.cpp ./src/Generate.cpp ./src/Identify.cpp ./src/main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(NAME)

fclean: clean

re: fclean all