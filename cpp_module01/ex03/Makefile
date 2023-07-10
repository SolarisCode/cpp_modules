# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 18:47:09 by melkholy          #+#    #+#              #
#    Updated: 2023/07/10 18:55:43 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human
CPPFILES = main.cpp \
		   Weapon.cpp \
		   HumanA.cpp \
		   HumanB.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
