NAME		:= test

SRCS		:=  main.c \
				strlen/*.c

REAL_DIR	:= ../real_tests/
REAL_SRCS	:= ft_strlen.c
REAL_SRCS	:= $(addprefix $(REAL_DIR), $(REAL_SRCS))

CC			:= gcc
# CFLAGS		:= -Wall -Wextra -Werror	# いらないかも
DEBUG		:= -g

LIB			:= libunit.a
LIBDIR		:= ../framework
LIBPATH		:= $(LIBDIR)/$(LIB)

RM			:= rm -rf
C_GREEN		:= "\x1b[32m"


all:		$(NAME)

$(NAME):	$(LIBPATH)
			$(CC) $(CFLAGS) $(DEBUG) $(REAL_SRCS) $(SRCS) $(LIBPATH) -I$(LIBDIR) -I$(REAL_DIR) -o $(NAME)
			./$(NAME)

$(LIBPATH):	## framework
			$(MAKE) -C $(LIBDIR)

clean:
			$(RM) $(NAME).dSYM
			$(MAKE) clean -C $(LIBDIR)

fclean:
			$(RM) $(NAME)
			$(MAKE) fclean -C $(LIBDIR)

re:			fclean $(NAME)

.PHONY:		all clean fclean re test
