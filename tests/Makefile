NAME		:= test

SRCS		:=  main.c \
				strlen/*.c

REALDIR		:= ../real-tests
REALPATH	:= $(REALDIR)/libft.a

CC			:= gcc
# CFLAGS		:= -Wall -Wextra -Werror	# いらないかも
DEBUG		:= -g

LIB			:= libunit.a
LIBDIR		:= ../framework
LIBPATH		:= $(LIBDIR)/$(LIB)

RM			:= rm -rf
C_GREEN		:= "\x1b[32m"


all:		$(NAME)

$(NAME):	$(LIBPATH) $(REALPATH)
			$(CC) $(CFLAGS) $(DEBUG) $(SRCS) $(LIBPATH) -I$(LIBDIR) -I$(REALDIR) $(REALPATH) -o $(NAME)
			./$(NAME)

$(LIBPATH):	## framework
			$(MAKE) -C $(LIBDIR)

$(REALPATH):	## libft
			$(MAKE) -C $(REALDIR)

clean:
			$(RM) $(NAME).dSYM
			$(MAKE) clean -C $(LIBDIR)

fclean:
			$(RM) $(NAME)
			$(MAKE) fclean -C $(LIBDIR)

re:			fclean $(NAME)

.PHONY:		all clean fclean re test
