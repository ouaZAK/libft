# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 09:37:54 by zouaraqa          #+#    #+#              #
#    Updated: 2023/01/08 18:06:31 by zouaraqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rc
RM = rm -rf
SRC =	ft_strjoin.c \
		ft_atoi.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_strlcpy.c \
		ft_calloc.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_memcpy.c \
		ft_strmapi.c \
		ft_isalpha.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_isascii.c \
		ft_memset.c \
		ft_strnstr.c \
		ft_isdigit.c \
		ft_putchar_fd.c \
		ft_strrchr.c \
		ft_isprint.c \
		ft_putendl_fd.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_putstr_fd.c \
		ft_tolower.c \
		ft_split.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \

OBJ = $(SRC:.c=.o)

SRCBONUS = 	ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c \
			ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c

OBJBONUS = $(SRCBONUS:.c=.o)

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(AR) $@ $^

bonus : $(NAME) $(OBJBONUS)
	@$(AR) $(NAME) $(OBJBONUS)

clean :
	@$(RM) $(OBJ) $(OBJBONUS)
fclean :
	@$(RM) $(OBJ) $(OBJBONUS) $(NAME)
re : fclean all
