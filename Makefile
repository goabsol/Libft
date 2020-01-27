# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arhallab <arhallab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 16:39:50 by arhallab          #+#    #+#              #
#    Updated: 2019/11/03 18:11:28 by arhallab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
			ft_isdigit.c ft_isprint.c ft_itoa.c  ft_memccpy.c ft_memchr.c ft_memcmp.c\
			ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c\
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
			ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_B	=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c\
			ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ		=	$(SRC:.c=.o)

OBJ_B	=	$(SRC_B:.c=.o)


$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ) && ranlib $(NAME)

bonus : $(OBJ_B)
	ar -rc $(NAME) $(OBJ_B) && ranlib $(NAME)

$(OBJ) :
	gcc -g -Wall -Werror -Wextra -c $(SRC)

$(OBJ_B) :
	gcc -Wall -Werror -Wextra -c $(SRC_B)

clean :
	rm -f $(OBJ) $(OBJ_B)

fclean : clean
	rm -f $(NAME)

re : fclean all

rebonus: clean bonus

all : $(NAME)

.Phony : all fclean clean bonus re rebonus


