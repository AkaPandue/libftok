# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albcleme <albcleme@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 20:06:15 by albcleme          #+#    #+#              #
#    Updated: 2023/11/30 22:09:24 by albcleme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_FILES	=   ft_strlen.c \
				ft_strchr.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_isascii.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_isalnum.c \
				ft_strncmp.c \
			    ft_strrchr.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_strlcpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_striteri.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_strtrim.c


OBJ			=	$(SRC_FILES:.c=.o)

HDRS		=	libft.h

CC 			= gcc

FLAGS 		= -Wall -Werror -Wextra -I $(HDRS)

%.o:		%.c libft.h
			$(CC) $(FLAGS) -c $< -o $@

all:	    $(NAME)

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)


clean:
			rm -f  $(OBJ) 

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: clean all fclean re bonus
