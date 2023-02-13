# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 10:35:39 by jcardina          #+#    #+#              #
#    Updated: 2023/02/13 12:54:01 by jacopo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

BONUS = \
		ft_lstnew.c \
		
OBJS = ${SRCS:%.c=%.o}

OBJSPLUS = ${BONUS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} :
	gcc -c ${FLAGS} ${SRCS} -I.
	ar rcs ${NAME} ${OBJS}

bonus: ${NAME}

${NAME} :
	gcc -c ${FLAGS} ${SRCS} ${BONUS} -I.
	ar rcs ${NAME} ${OBJS} ${OBJSPLUS}

clean:
	 rm  -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
