# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 16:19:27 by cdapurif          #+#    #+#              #
#    Updated: 2022/01/19 16:46:11 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRCS = main.cpp	\
		Weapon.cpp	\
		HumanA.cpp	\
		HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
