# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/22 18:59:36 by obeedril          #+#    #+#              #
#    Updated: 2021/05/09 13:47:18 by obeedril         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c\
	  ft_memccpy.c ft_memmove.c ft_memchr.c\
	  ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c\
	  ft_strlen.c ft_strlcpy.c ft_strlcat.c\
	  ft_strchr.c ft_strrchr.c ft_strnstr.c\
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	  ft_isascii.c ft_isprint.c ft_toupper.c\
	  ft_tolower.c ft_atoi.c ft_strncmp.c\
	  ft_putnbr_fd.c ft_putendl_fd.c ft_calloc.c\
	  ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	  ft_itoa.c ft_split.c ft_strmapi.c

OBJ = ${SRC:.c=.o}

HEADER = libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:	libft.h
				${CC} ${FLAGS} -c $< -I ${HEADER} -o ${<:.c=.o}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

all : ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
