##
## Makefile for Makefile in /home/rosey_c/rendu/MUL_2014_rtv1
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Wed Dec 11 10:16:44 2013 rosey
## Last update Mon Mar 10 09:50:41 2014 rosey
##

CC	= gcc

RM	= rm -f

NAME	= rtv1

SRC	= main.c	\
	  rtv1.c 	\
	  my_putstr.c	\
	  my_putchar.c	\
	  rtv1_2.c

OBJS	= $(SRC:.c=.o)


LIBB	= -L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11


CFLAGS	+= -W -Werror
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -ansi -I -pedantic
CFLAGS	+= -g3


$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIBB) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM)	$(NAME)

re:	fclean all
