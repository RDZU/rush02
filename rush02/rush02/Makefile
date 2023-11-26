SRCS = ./function.c file.c 
OBJS = ${SRCS:.c=.o}
CFLAG = gcc -Wall -Wextra -Werror
NAME = rush


.c.o:
	${CFLAG} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME} ${OBJS}
