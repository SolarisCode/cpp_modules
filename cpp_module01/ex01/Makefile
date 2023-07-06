# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 22:28:08 by melkholy          #+#    #+#              #
#    Updated: 2023/07/06 22:28:10 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
CPPFILES = main.cpp \
			Zombie.cpp \
			zombieHorde.cpp \

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re