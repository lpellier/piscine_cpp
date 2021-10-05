NAME = test

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

SRCS = ./main.cpp \
		./ClapTrap.cpp \
		./ScavTrap.cpp \
		./FragTrap.cpp \
		./DiamondTrap.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean : 
	$(RM) $(NAME)

re : clean all
