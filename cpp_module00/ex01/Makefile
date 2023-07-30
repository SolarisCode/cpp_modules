# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 21:15:38 by melkholy          #+#    #+#              #
#    Updated: 2023/07/04 22:20:54 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPPFILES = main.cpp \
		   PhoneBook.cpp \
		   Contact.cpp

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
