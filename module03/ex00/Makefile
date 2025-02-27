# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 11:43:07 by adapassa          #+#    #+#              #
#    Updated: 2025/02/27 15:06:07 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.cpp
NAME = claptrap
FLAGS = c++ -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC)
		$(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
