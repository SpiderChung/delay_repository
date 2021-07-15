SRCS	= srcs/*.c

DEL		= ${SRCS:.c=.o}

NAME	= rush-02

DEST	= includes/

RM 		= rm -f

FLAGS	= -Wall -Wextra -Werror

GCC 	= gcc

.c.o:		
			
			${GCC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${DEST}			

${NAME}:	${DEL}
			${GCC} -o ${NAME} ${DEL}

all: 		${NAME}

clean:	
			${RM} ${DEL}

fclean:		clean
			${RM} ${NAME}

re:			fclean all	


