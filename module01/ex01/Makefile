# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 10:53:51 by adapassa          #+#    #+#              #
#    Updated: 2025/02/19 11:10:47 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = c++ -Wall -Wextra -Werror -std=c++98
NAME = horde
SRCS = main.cpp Zombie.cpp zombieHorde.cpp

all:$(NAME)

$(NAME) : $(SRCS)
		$(FLAGS) $(SRCS) -o $(NAME)

clean: 
		rm -rf $(NAME)

fclean: clean

re: fclean all