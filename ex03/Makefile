NAME = Interface
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address
RM = rm -rf

GREEN = \033[1;38;5;114m
ORANGE = \033[1;38;5;208m
CYAN = \033[1;38;5;51m
PURPLE = \033[1;38;5;201m
PINK = \033[1;38;5;198m
BLUE = \033[1;38;5;153m
RED = \033[1;38;5;196m
YELLOW = \033[1;38;5;220m
NC = \033[0m

SRCS =	main.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		Character.cpp \
		Ice.cpp \
		Cure.cpp \


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(CYAN)Compiling... ⏳$(NC)"
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Project compiled ✅$(NC)"

%.o: %.cpp
	@$(CXX) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(ORANGE)Objects cleaned$(NC)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable cleaned 🗑️$(NC)"

re: fclean all

.PHONY: all clean fclean re
