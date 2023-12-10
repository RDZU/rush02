SRCS = function.c file.c main.c
OBJS = ${SRCS:.c=.o}
CFLAG = cc -Wall -Wextra -Werror
NAME = rush-02

.c.o:
	${CFLAG} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

fclean:
	rm -f ${NAME} ${OBJS}
