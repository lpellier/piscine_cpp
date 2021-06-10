NAME = phonebook

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRCS = ./phonebook.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean : 
	$(RM) $(NAME)

re : clean all