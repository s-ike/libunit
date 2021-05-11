NAME		:= test

<<<<<<< HEAD
SRCS		:=	main.c \
				strlen/*.c \
				atoi/*.c \
				strdup/*.c \
				memchr/*.c

REAL_DIR	:= ../real_tests/
REAL_SRCS	:= libft.a
REAL_SRCS	:= $(addprefix $(REAL_DIR), $(REAL_SRCS))
=======
SRCS		:= main.c \
				atoi/00_launcher.c \
				atoi/01_basic_test.c \
				atoi/02_null_test.c \
				atoi/03_intmax_test.c \
				atoi/04_ascii_test.c \
				atoi/05_ovf_test.c \
				\
				memchr/00_launcher.c \
				memchr/01_basic_test.c \
				memchr/02_null_test.c \
				memchr/03_bigger_str_test.c \
				memchr/04_empty_str_test.c \
				\
				strdup/00_launcher.c \
				strdup/01_basic_test.c \
				strdup/02_null_test.c \
				strdup/03_bigger_str_test.c \
				strdup/04_empty_str_test.c \
				strdup/05_address_test.c \
				\
				strlen/00_launcher.c \
				strlen/01_basic_test.c \
				strlen/02_null_test.c \
				strlen/03_bigger_str_test.c \
				strlen/04_empty_str_test.c
OBJS		:= $(SRCS:.c=.o)

LIBFT_DIR	:= ../libft
LIBFT_PATH	:= libft.a
LIBFT_PATH	:= $(LIBFT_DIR)/$(LIBFT_PATH)

KO_DIR		:= ../real_tests
KO_PATH		:= libft.a
KO_PATH		:= $(KO_DIR)/$(KO_PATH)
>>>>>>> 1110d89847695d7a3668c9d9b4d8993c7849c81b

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:= -g

LIBUNIT		:= libunit.a
LIBUNIT_DIR	:= ../framework
LIBUNIT_PATH	:= $(LIBUNIT_DIR)/$(LIBUNIT)

RM			:= rm -rf
C_GREEN		:= "\x1b[32m"
C_DEFAULT	:= "\x1b[39m"


all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) $(DEBUG) -I$(LIBUNIT_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(NAME):	$(LIBUNIT_PATH) $(LIBFT_PATH) $(OBJS)
			$(CC) $(CFLAGS) $(DEBUG) $(LIBUNIT_PATH) $(LIBFT_PATH) $(OBJS) -o $(NAME)
			@echo $(C_GREEN)"=== make test DONE ==="$(C_DEFAULT)
			./$(NAME)

$(LIBUNIT_PATH):	## framework
			$(MAKE) -C $(LIBUNIT_DIR)

$(LIBFT_PATH):
			$(MAKE) -C $(LIBFT_DIR)

clean:
			$(RM) $(OBJS)
			$(MAKE) clean -C $(LIBUNIT_DIR)
			$(MAKE) clean -C $(LIBFT_DIR)
			$(MAKE) clean -C $(KO_DIR)

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) fclean -C $(LIBUNIT_DIR)
			$(MAKE) fclean -C $(LIBFT_DIR)
			$(MAKE) fclean -C $(KO_DIR)
			@echo $(C_GREEN)"=== fclean DONE ==="$(C_DEFAULT)

re:			fclean $(NAME)

ko:			$(LIBUNIT_PATH) $(OBJS)
			$(MAKE) fclean -C $(KO_DIR)
			$(MAKE) ko -C $(KO_DIR)
			$(CC) $(CFLAGS) $(DEBUG) $(KO_PATH) $(LIBUNIT_PATH) $(OBJS) -o $(NAME)
			@echo $(C_GREEN)"=== make test DONE ==="$(C_DEFAULT)
			./$(NAME)

buse:		$(LIBUNIT_PATH) $(OBJS)
			$(MAKE) fclean -C $(KO_DIR)
			$(MAKE) buse -C $(KO_DIR)
			$(CC) $(CFLAGS) $(DEBUG) $(KO_PATH) $(LIBUNIT_PATH) $(OBJS) -o $(NAME)
			@echo $(C_GREEN)"=== make test DONE ==="$(C_DEFAULT)
			./$(NAME)

timeo:		$(LIBUNIT_PATH) $(OBJS)
			$(MAKE) fclean -C $(KO_DIR)
			$(MAKE) timeo -C $(KO_DIR)
			$(CC) $(CFLAGS) $(DEBUG) $(KO_PATH) $(LIBUNIT_PATH) $(OBJS) -o $(NAME)
			@echo $(C_GREEN)"=== make test DONE ==="$(C_DEFAULT)
			./$(NAME)

.PHONY:		all clean fclean re test ko buse
