# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 17:01:20 by melkholy          #+#    #+#              #
#    Updated: 2023/07/20 17:03:39 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap
CPPFILES = ./ClapTrap.cpp ./main.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: all fclean

.PHONY: all clean fclean re
