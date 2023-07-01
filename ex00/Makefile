# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 13:19:10 by fmanzana          #+#    #+#              #
#    Updated: 2023/07/01 13:23:14 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS =	ClapTrap.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "ClapTrap compiled!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:			fclean all

.PHONY: all clean fclean re
