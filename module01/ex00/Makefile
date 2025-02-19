FLAGS = c++ -Wall -Wextra -Werror -std=c++98
NAME = zombie
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all:$(NAME)

$(NAME) : $(SRCS)
		$(FLAGS) $(SRCS) -o $(NAME)

clean: 
		rm -rf $(NAME)

fclean: clean

re: fclean all