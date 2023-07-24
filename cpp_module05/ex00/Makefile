# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 18:34:08 by melkholy          #+#    #+#              #
#    Updated: 2023/07/24 18:37:57 by melkholy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
CPPFILES = ./main.cpp ./Bureaucrat.cpp \
		./GradeTooLowException.cpp ./GradeTooHighException.cpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(CPPFILES)
	c++ $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
