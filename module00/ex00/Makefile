# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 13:59:47 by adapassa          #+#    #+#              #
#    Updated: 2025/02/19 09:52:39 by adapassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp
FLAGS = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: $(NAME)

$(NAME): $(SRCS)
			$(FLAGS) $(SRCS) -o $(NAME)

clean:
			@rm -rf $(NAME)

fclean:		clean

re:			fclean all