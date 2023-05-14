NAME = libftprintf.a

SRCS =	ft_t_c.c \
		ft_t_d.c \
		ft_t_i.c \
		ft_t_per.c \
		ft_t_s.c \
		ft_t_u.c \
		ft_t_x.c \
		ft_t_Xx.c \
		ft_t_p.c \
		ft_strrev.c \
		ft_strlen.c \
		ft_printf.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putunbr_fd.c \
		ft_putchar_fd.c \

OBJ =	${SRCS:.c=.o}

CC =	gcc

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJ}
		ar rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
