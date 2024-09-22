# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 17:48:36 by melkholy          #+#    #+#              #
#    Updated: 2024/09/22 19:55:23 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= RPN
SRCS= main.cpp RPN.cpp
CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean all re
