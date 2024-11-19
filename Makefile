##
## EPITECH PROJECT, 2024
## Standard Cworkshop Library
## File description:
## Makefile
##
################################################################
## █████╗ ███╗   ███╗ █████╗ ██╗   ██╗██╗   ██╗ █████╗ ███████╗#
##██╔══██╗████╗ ████║██╔══██╗╚██╗ ██╔╝╚██╗ ██╔╝██╔══██╗██╔════╝#
##███████║██╔████╔██║███████║ ╚████╔╝  ╚████╔╝ ███████║███████╗#
##██╔══██║██║╚██╔╝██║██╔══██║  ╚██╔╝    ╚██╔╝  ██╔══██║╚════██║#
##██║  ██║██║ ╚═╝ ██║██║  ██║   ██║      ██║   ██║  ██║███████║#
##╚═╝  ╚═╝╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝#
################################################################

NAME	=	Standard_CworkshopLib

SRCS	=	lib/my_abs.c	\
			lib/my_acos.c	\
			lib/my_asctime_r.c	\
			lib/my_asctime.c	\
			lib/my_asin.c	\
			lib/my_assert.c	\
			lib/my_atan.c	\
			lib/my_atan2.c	\
			lib/my_atof.c	\
			lib/my_atoi.c	\
			lib/my_atol.c	\
			lib/my_bsearch.c	\
			lib/my_calloc.c	\
			lib/my_ceil.c	\
			lib/my_cos.c	\
			lib/my_cosh.c	\
			lib/my_exp.c	\
			lib/my_fabs.c	\
			lib/my_fclose.c	\
			lib/my_fgetc.c	\
			lib/my_fgets.c	\
			lib/my_fread.c	\
			lib/my_getc.c	\
			lib/my_isalnum.c	\
			lib/my_isalpha.c	\
			lib/my_isascii.c	\
			lib/my_isblank.c	\
			lib/my_iscntrl.c	\
			lib/my_isdigit.c	\
			lib/my_localeconv.c	\
			lib/my_putc.c	\
			lib/my_putchar.c	\
			lib/my_putenv.c	\
			lib/my_puts.c	\
			lib/my_read.c	\
			lib/my_sin.c	\
			lib/my_sqrt.c	\
			lib/my_strcasecmp.c	\
			lib/my_strcat.c	\
			lib/my_strchr.c	\
			lib/my_strcmp.c	\
			lib/my_strcoll.c	\
			lib/my_strcpy.c	\
			lib/my_strcspn.c	\
			lib/my_strerror.c	\
			lib/my_strlen.c	\
			lib/my_toascii.c	\
			lib/my_tolower.c	\
			lib/my_toupper.c	\
			lib/my_towctrans.c	\
			lib/my_towlower.c	\
			lib/my_towupper.c	\
			lib/my_wctrans.c	\
			lib/my_write.c	\
			main.c

OBJS =	$(SRCS:.c=.o)

CFLAGS = -W -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
