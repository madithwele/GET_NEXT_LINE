# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 09:55:36 by mmodisad          #+#    #+#              #
#    Updated: 2019/06/25 10:21:09 by mmodisad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -c

FILES =	ft_atoi.c ft_striteri.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c \
ft_strsplit.c ft_strlcat.c ft_strnstr.c ft_strnequ.c ft_strmap.c ft_itoa.c ft_numlen.c ft_strequ.c ft_putnbr_fd.c ft_strmapi.c\
ft_strstr.c ft_memchr.c ft_isalpha.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
ft_memalloc.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_space.c\
ft_numofstr.c ft_strtrim.c ft_delstrlen.c ft_strnew.c ft_memdel.c ft_strdup.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strsub.c \
ft_putendl_fd.c ft_strrchr.c ft_putnbr.c ft_strncpy.c ft_tolower.c ft_toupper.c ft_isalnum.c \
ft_strjoin.c ft_striter.c ft_strdel.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memcmp.c ft_strchr.c 

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f *.o 

fclean: clean
	rm -f libft.a

re: fclean all
