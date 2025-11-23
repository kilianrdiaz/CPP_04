# **************************************************************************** #
#                                   SETTINGS                                   #
# **************************************************************************** #

NAME        = ex02
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -Iinc

SRC_DIR     = src
INC_DIR     = inc
OBJ_DIR     = obj

# Coge automáticamente todos los .cpp dentro de src/
SRC         = $(wildcard $(SRC_DIR)/*.cpp)
OBJ         = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "🎉 Build complete: $(NAME)"

# Compila cada .cpp en un .o dentro de obj/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "🧹 Objects removed."

fclean: clean
	@rm -f $(NAME)
	@echo "🧨 Executable removed."

re: fclean all

.PHONY: all clean fclean re
