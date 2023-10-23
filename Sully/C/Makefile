NAME	= Sully
CC		= cc
FLAGS	= -Wall -Wextra -Werror -MMD
SRCS	= Sully.c
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
	clang -Wall -Wextra -Werror -o Sully Sully.c; ./Sully; diff Sully.c Sully.c

clean_others:
	rm -rf Sully_*

-include ${DEPS}

.PHONY: all clean fclean re