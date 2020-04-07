# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/06 20:28:25 by ykoh              #+#    #+#              #
#    Updated: 2020/04/06 20:28:35 by ykoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	*.c
OBJECTS	=	*.o
INCLUDES=	./

all		:	$(NAME)

$(NAME)	:	$(SRCS) libft.h
			@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
			@ar rc $(NAME) $(OBJECTS)
			@ranlib $(NAME)

clean	:
			@/bin/rm -f $(OBJECTS)

fclean	:	clean
			@/bin/rm -f $(NAME) libft.a

re		:	all clean

.PHONY	:	all clean fclean re
