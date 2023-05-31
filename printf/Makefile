NAME = libftprintf.a

SRC = ft_printf.c ft_auxfun.c ft_printhex.c ft_printhex_up.c ft_auxbasic.c ft_printadress.c

OBJS = ft_printf.o ft_auxfun.o ft_printhex.o ft_printhex_up.o ft_auxbasic.o ft_printadress.o

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
MAKE = make -C
LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a

.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		${MAKE} ${LIBFT_PATH} all
		cp ${LIBFT} ${NAME}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${MAKE} ${LIBFT_PATH} clean
		${RM} ${OBJS}

fclean: clean
		${MAKE} ${LIBFT_PATH} fclean

re: fclean all

