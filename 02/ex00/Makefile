# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 02:29:26 by yeonhlee          #+#    #+#              #
#    Updated: 2021/06/11 17:09:29 by yeonhlee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

INC		=	-I ./

SRCS	=	$(addprefix , \
			main.cpp \
			Fixed.class.cpp \
			)

OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
			$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)
			
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all

.PHONY:		all clean fclean re