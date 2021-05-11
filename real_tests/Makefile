NAME		:= libft.a

SRCS		:= ft_atoi.c \
				ft_strdup.c \
				ft_memchr.c

REGULAR_SRCS	:= $(SRCS)
REGULAR_SRCS	+= ft_strlen.c
REGULAR_OBJS	:= $(REGULAR_SRCS:.c=.o)

KO_SRCS		:= $(SRCS)
KO_SRCS		+= ft_strlen_ko.c
KO_OBJS		+= $(KO_SRCS:.c=.o)

BUSE_SRCS	:= $(SRCS)
BUSE_SRCS	+= ft_strlen_buse.c
BUSE_OBJS	:= $(BUSE_SRCS:.c=.o)

TIMEO_SRCS	:= $(SRCS)
TIMEO_SRCS	+= ft_strlen_timeout.c
TIMEO_OBJS	:= $(TIMEO_SRCS:.c=.o)

ABRT_SRCS	:= $(SRCS)
ABRT_SRCS	+= ft_strlen_abrt.c
ABRT_OBJS	:= $(ABRT_SRCS:.c=.o)

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror
DEBUG		:=

AR			:= ar
ARFLAGS		:= rc

RM			:= rm -rf


.c.o:
			$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(REGULAR_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(REGULAR_OBJS)

clean:
			$(RM) $(REGULAR_OBJS)
			$(RM) $(KO_OBJS)
			$(RM) $(BUSE_OBJS)
			$(RM) $(TIMEO_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

ko:			fclean $(KO_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(KO_OBJS)

buse:		fclean $(BUSE_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(BUSE_OBJS)

abrt:		fclean $(ABRT_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(ABRT_OBJS)

timeo:		fclean $(TIMEO_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(TIMEO_OBJS)

.PHONY:		all clean fclean re ko buse abrt timeo
