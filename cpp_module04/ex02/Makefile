# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 17:01:20 by melkholy          #+#    #+#              #
#    Updated: 2023/07/23 19:08:39 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CPPFILES = ./Cat.cpp ./Dog.cpp ./main.cpp ./WrongCat.cpp \
			./WrongAnimal.cpp ./Brain.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
