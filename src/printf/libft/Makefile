# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 12:12:41 by jgomes-v          #+#    #+#              #
#    Updated: 2023/04/24 17:03:09 by jgomes-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
FILES= ft_strlen.c ft_isdigit.c ft_isalpha.c ft_atoi.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_calloc.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_substr.c ft_strjoin.c ft_isalnum.c ft_isascii.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c 
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
OBJECTS= ft_isdigit.o ft_strlen.o ft_isalpha.o ft_atoi.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strncmp.o ft_strnstr.o ft_strchr.o ft_strrchr.o ft_strlcpy.o ft_strlcat.o ft_memset.o ft_bzero.o ft_calloc.o ft_memmove.o ft_memcpy.o ft_memchr.o ft_memcmp.o ft_strdup.o ft_substr.o ft_strjoin.o ft_isalnum.o ft_isascii.o ft_strtrim.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strmapi.o ft_itoa.o ft_split.o ft_striteri.o
BONUS_OBJS = ft_lstnew.o ft_lstadd_front.o ft_lstadd_back.o ft_lstsize.o ft_lstlast.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o
INCLUDE= -I .
HEADER= libft.h

.c.o: $(CFILES)
	$(COMPILER) $(FLAGS) $(INCLUDE) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $@ $^ $(HEADER)

bonus:	$(OBJECTS) $(BONUS_OBJS)
		$(AR) $(NAME) $(OBJECTS) $(BONUS_OBJS)

all: $(NAME)

clean:
	rm -f $(OBJECTS) $(NAME)
fclean: clean
	rm -f $(NAME)

re: clean all
