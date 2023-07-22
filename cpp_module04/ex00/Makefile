# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 17:01:20 by melkholy          #+#    #+#              #
#    Updated: 2023/07/22 02:44:00 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CPPFILES = ./Animal.cpp ./Cat.cpp ./Dog.cpp ./main.cpp \
			./WrongCat.cpp ./WrongAnimal.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: all fclean

.PHONY: all clean fclean re
