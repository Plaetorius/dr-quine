NAME	= Colleen
CC	= gcc
NASM	= nasm
NASMFLAGS = -f elf64
LDFLAGS	= 
SRCS	= Colleen.s
OBJS	= $(SRCS:.s=.o)
DEPS	= $(OBJS:.o=.d)
RM	= rm -rf

%.o: %.s
	@echo "Assembling $< "
	@$(NASM) $(NASMFLAGS) $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LDFLAGS) -o $@ 
	@echo "Successfully created $(NAME)!"

all: $(NAME)

clean:
	@echo "Cleaned $(NAME)"
	@$(RM) $(OBJS) $(DEPS)

fclean:
	@echo "FCleaned $(NAME)"
	@$(RM) $(OBJS) $(NAME) $(DEPS)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
