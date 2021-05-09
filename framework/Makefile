NAME		:= libunit.a
DEBUG_NAME	:= debug.out

SRCS		:= error.c \
				launch_tests.c \
				load_test.c
OBJS		:= $(SRCS:.c=.o)

DEBUG_SRCS	:= $(SRCS)
DEBUG_SRCS	+= debug/main.c
DEBUG_OBJS	:= $(DEBUG_SRCS:.c=.o)

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:= -g

AR			:= ar
ARFLAGS		:= rc

RM			:= rm -f


.c.o:
			$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
			$(RM) $(DEBUG_OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(DEBUG_NAME)

re:			fclean $(NAME)

debug:		$(DEBUG_OBJS)
			$(CC) $(DEBUG) $(DEBUG_OBJS) -o $(DEBUG_NAME)

.PHONY:		all clean fclean re debug
