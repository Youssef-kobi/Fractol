# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-kobi <yel-kobi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/28 02:31:10 by yel-kobi          #+#    #+#              #
#    Updated: 2020/10/21 18:24:53 by yel-kobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
RM = /bin/rm -f
HEADER = ../includes/libft.h
OPTION = -c
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(OPTION) $(CFLAGS) $(SRC) $(HEADER)
	ar rc $(NAME) *.o && ranlib $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
