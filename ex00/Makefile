# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 15:01:54 by jnoh              #+#    #+#              #
#    Updated: 2023/01/06 15:28:41 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	c++
CFLAGS	= 	-Wall -Werror -Wextra # -std=c++98
SRCS	= 	megaphone.cpp
NAME	=	megaphone
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

all	: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re