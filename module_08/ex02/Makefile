NAME = test

CC = c++

CFLAGS = -Wall -g3 -Werror -Wextra -std=c++98

SRCS = ./main.cpp \
		./MutantStack.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean : 
	$(RM) $(NAME)

re : clean all
