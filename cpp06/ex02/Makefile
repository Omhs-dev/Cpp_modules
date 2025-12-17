NAME = base

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp ./srcs/Functions.cpp

OBJDIR = ./Objs

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

INCLUDES = -I./includes

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)/srcs
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(RM) $(OBJDIR)/*.o $(OBJDIR)/srcs/*.o
		@rm -rf $(OBJDIR)
		
fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
