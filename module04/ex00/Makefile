# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 11:10:32 by adapassa          #+#    #+#              #
#    Updated: 2025/02/28 11:16:19 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
SRC = main.cpp Animal.cpp
FLAGS = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all