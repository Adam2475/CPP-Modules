# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/19 12:25:33 by adapassa          #+#    #+#              #
#    Updated: 2025/02/19 12:26:54 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = c++ -Wall -Wextra -Werror -std=c++98
NAME = pref
SRCS = main.cpp

all:$(NAME)

$(NAME) : $(SRCS)
		$(FLAGS) $(SRCS) -o $(NAME)

clean: 
		rm -rf $(NAME)

fclean: clean

re: fclean all