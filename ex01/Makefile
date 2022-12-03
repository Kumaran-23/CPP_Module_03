NAME = scavTrap
SRC = ClapTrap.cpp ScavTrap.cpp main.cpp
HEADER = ClapTrap.hpp ScavTrap.hpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -pedantic

GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
WHITE		=	\033[0;97m

start:
			@echo "$(YELLOW)Start Make:$(WHITE)"
			@make all
			
all: $(NAME)

$(NAME): $(HEADER) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)ex01 Done!$(WHITE)"

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(BLUE)ex01: object files have been cleaned!$(WHITE)"


fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)ex01: files have been cleaned!$(WHITE)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ex01\n$(WHITE)"


.PHONY: all clean fclean re