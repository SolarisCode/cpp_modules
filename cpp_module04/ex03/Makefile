# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 17:01:20 by melkholy          #+#    #+#              #
#    Updated: 2023/07/23 19:08:23 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CPPFILES = ./Ice.cpp ./Cure.cpp ./AMateria.cpp \
			./Character.cpp ./MateriaSource.cpp \
			./main.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
