# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 20:01:27 by melkholy          #+#    #+#              #
#    Updated: 2023/07/20 01:18:41 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSPcalc
CPPFILES = ./main.cpp ./Fixed.cpp ./Point.cpp ./bsp.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
