NAME        = ex02

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -I inc

SRCDIR      = src
INCDIR      = inc
OBJDIR      = obj

SRC         = $(SRCDIR)/main.cpp \
              $(SRCDIR)/AAnimal.cpp \
              $(SRCDIR)/Dog.cpp \
              $(SRCDIR)/Cat.cpp \
              $(SRCDIR)/Brain.cpp

OBJ         = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ): $(INCDIR)/AAnimal.hpp $(INCDIR)/Cat.hpp $(INCDIR)/Dog.hpp \
		$(INCDIR)/Brain.hpp Makefile 

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
