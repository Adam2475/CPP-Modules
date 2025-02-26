# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 11:43:53 by adapassa          #+#    #+#              #
#    Updated: 2025/02/26 11:44:00 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.cpp
NAME = canon
FLAGS = c++ -Wall -Wextra -Werror -pedantic -std=c++98 

$(NAME): $(SRC)
		$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
