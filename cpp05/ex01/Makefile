NAME = form

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp ./src/Bureaucrat.cpp ./src/Form.cpp

OBJDIR = ./Objs

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

INCLUDES = -I./Includes

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)/src
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(RM) $(OBJDIR)/*.o $(OBJDIR)/src/*.o
		@rm -rf $(OBJDIR)
		
fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
