NAME		:= test

SRCS		:=  main.c \
				strlen/*.c \
				atoi/*.c \
				strdup/*.c

REAL_DIR	:= ../real_tests/
REAL_SRCS	:= libft.a
REAL_SRCS	:= $(addprefix $(REAL_DIR), $(REAL_SRCS))

CC			:= gcc
CFLAGS		:=
# CFLAGS		+= -Wall -Wextra -Werror
DEBUG		:= -g

LIB			:= libunit.a
LIBDIR		:= ../framework
LIBPATH		:= $(LIBDIR)/$(LIB)

RM			:= rm -rf
C_GREEN		:= "\x1b[32m"
C_DEFAULT	:= "\x1b[39m"


all:		$(NAME)

$(NAME):	$(LIBPATH) $(REAL_SRCS)
			$(CC) $(CFLAGS) $(DEBUG) $(REAL_SRCS) $(SRCS) $(LIBPATH) -I$(LIBDIR) -I$(REAL_DIR) -o $(NAME)
			@echo $(C_GREEN)"=== make test DONE ==="$(C_DEFAULT)
			./$(NAME)

$(LIBPATH):	## framework
			$(MAKE) -C $(LIBDIR)

$(REAL_SRCS):
			$(MAKE) -C $(REAL_DIR)

clean:
			$(RM) $(NAME).dSYM
			$(MAKE) clean -C $(LIBDIR)
			$(MAKE) clean -C $(REAL_DIR)

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) fclean -C $(LIBDIR)
			$(MAKE) fclean -C $(REAL_DIR)
			@echo $(C_GREEN)"=== fclean DONE ==="$(C_DEFAULT)

re:			fclean $(NAME)

.PHONY:		all clean fclean re test
