SRC = *.cpp
NAME = canon
FLAGS = c++ -Wall -Wextra -Werror -std=c++98 -pedantic

$(NAME): $(SRC)
		$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
