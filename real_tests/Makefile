NAME		:= libft.a

SRCS		:= ft_strlen.c
OBJS		:= $(SRCS:.c=.o)

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:=

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

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
