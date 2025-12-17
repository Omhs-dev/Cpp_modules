NAME = unn_violence

SRCS = ./main.cpp ./HumanA.cpp ./HumanB.cpp \
		./Weapon.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -fsanitize=address

RM = rm -rf

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run
