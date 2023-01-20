# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 15:01:54 by jnoh              #+#    #+#              #
#    Updated: 2023/01/20 15:49:02 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= 	c++
CXXFLAGS= 	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	= 	main.cpp PhoneBook.cpp Contact.cpp
NAME	=	phonebook
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
			$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

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