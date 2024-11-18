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
			lib/my_read.c	\
			lib/my_sqrt.c	\
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
