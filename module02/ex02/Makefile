# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 11:43:12 by adapassa          #+#    #+#              #
#    Updated: 2025/02/26 11:43:34 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.cpp
NAME = canon
FLAGS = c++ -Wall -Wextra -Werror -std=c++98 -pedantic

$(NAME): $(SRC)
		$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
