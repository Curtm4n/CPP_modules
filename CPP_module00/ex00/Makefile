# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 16:24:00 by cdapurif          #+#    #+#              #
#    Updated: 2022/01/11 17:03:55 by cdapurif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

CC = 	clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
