# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 22:30:56 by melkholy          #+#    #+#              #
#    Updated: 2023/07/06 22:30:58 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CPPFILES = main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re