# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 12:06:31 by fmanzana          #+#    #+#              #
#    Updated: 2023/07/06 14:04:00 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "DiamondTrap compiled!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:		fclean all

.PHONY: all clean fclean re
