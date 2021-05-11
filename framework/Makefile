NAME		:= libunit.a
DEBUG_NAME	:= debug.out

SRCS		:= clear_test.c \
				error.c \
				launch_tests.c \
				load_test.c \
				file_manager.c

OBJS		:= $(SRCS:.c=.o)

DEBUG_SRCS	:= debug/main.c

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:= -g

AR			:= ar
ARFLAGS		:= rc

RM			:= rm -rf


.c.o:
			$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
			$(RM) $(DEBUG_NAME).dSYM

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(DEBUG_NAME)

re:			fclean $(NAME)

debug:		$(OBJS) $(DEBUG_SRCS)
			$(CC) $(DEBUG) $(OBJS) $(DEBUG_SRCS) -D DEBUG -o $(DEBUG_NAME)

.PHONY:		all clean fclean re debug
