# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 16:24:00 by cdapurif          #+#    #+#              #
#    Updated: 2022/01/13 14:47:02 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

CXX = 	clang++

CXXFLAGS = -Wall -Wextra -Werror

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
