# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/12 00:26:56 by dalys-fr          #+#    #+#              #
#    Updated: 2018/12/12 01:21:53 by dalys-fr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c

OUT = ft_*.o

INC = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INC)
	ar rc $(NAME) $(OUT)

clean:
	rm -f $(OUT)
fclean:
	rm -f $(OUT)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
