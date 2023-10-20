NAME	= Colleen
CC		= cc
FLAGS	= -Wall -Wextra -Werror -MMD
SRCS	= Colleen.c
OBJS	= ${SRCS:.c=.o}
DEPS	= ${OBJS:.o=.d}
RM		:= rm -rf

%.o: %.cpp
	@echo "\033[1A                                                              "
	@echo -n "\033[1A"
	@echo "Compiling $< "
	@${CC} ${FLAGS} -o $@ -c $< ${INCL}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o $@ 
	@echo "Successfully created ${NAME}!"

all: ${NAME}

clean:
	@echo "Cleaned ${NAME}"
	@${RM} ${OBJS} ${DEPS}

fclean:
	@echo "FCleaned ${NAME}"
	@${RM} ${OBJS} ${NAME} ${DEPS}

re: fclean all

subject_test:
	clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen ; diff tmp_Colleen Colleen.c

-include ${DEPS}

.PHONY: all clean fclean re