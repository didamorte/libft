#Nomes#
NAME = libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar 
ARFLAGS	= -rc
RM	= rm -rf

SRCS	= ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_substr.c \
		ft_split.c \
		ft_strjoin.c \
		ft_strtrim.c

BONUS_SRCS	= 

#transformacao#
OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRCS:.c=.o)

#Regras#
all: $(NAME)

bonus: all
		$(BONUS_OBJ)

clean: 
		$(RM) $(OBJ)

fclean: clean 
		$(RM) $(NAME)

re: fclean all

#Compilacao#
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(BONUS): $(BONUS_OBJ)
	$(NAME) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Anti-Confusao#
.PHONY: all bonus clean fclean re