# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 21:57:37 by melkholy          #+#    #+#              #
#    Updated: 2023/07/05 22:01:34 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CPPFILES = Account.cpp \
		   tests.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
.PHONE: all clean fclean re
