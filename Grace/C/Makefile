NAME	= Grace
CC		= cc
FLAGS	= -Wall -Wextra -Werror -MMD
SRCS	= Grace.c
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
	@${RM} ${OBJS} ${NAME} ${DEPS} Grace_kid.c

re: fclean all

subject_test:
	clang -Wall -Wextra -Werror -o Grace Grace.c; ./Grace; diff Grace_kid.c Grace.c

-include ${DEPS}

.PHONY: all clean fclean re