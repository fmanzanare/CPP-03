# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 18:09:37 by fmanzana          #+#    #+#              #
#    Updated: 2023/07/04 18:09:37 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	ScavTrap.cpp\
		ClapTrap.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "ScavTrap compiled!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:		fclean all

.PHONY: all clean fclean re
