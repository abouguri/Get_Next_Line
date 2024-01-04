SRCS = get_next_line.c get_next_line_utils.c main.c

OBJS = ${SRCS:.c=.o}

NAME = get_next_line.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re