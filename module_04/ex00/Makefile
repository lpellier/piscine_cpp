NAME = test

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ./main.cpp \
		./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp \
		./WrongAnimal.cpp \
		./WrongCat.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean : 
	$(RM) $(NAME)

re : clean all
