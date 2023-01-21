# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 10:35:39 by jcardina          #+#    #+#              #
#    Updated: 2023/01/21 15:36:46 by jcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJS = ${SRCS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} :
	gcc -c ${FLAGS} ${SRCS} -I.
	ar rcs ${NAME} ${OBJS}

clean:
	 rm  -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
