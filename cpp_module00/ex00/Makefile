# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 22:44:08 by melkholy          #+#    #+#              #
#    Updated: 2023/06/30 22:53:13 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFILES = ./megaphone.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean :
	@rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
