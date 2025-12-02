NAME        = ex00

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -I inc

SRCDIR      = src
INCDIR      = inc
OBJDIR      = obj

SRC         = $(SRCDIR)/main.cpp \
              $(SRCDIR)/Animal.cpp \
              $(SRCDIR)/Dog.cpp \
              $(SRCDIR)/Cat.cpp \
              $(SRCDIR)/WrongAnimal.cpp \
              $(SRCDIR)/WrongCat.cpp

OBJ         = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ): $(INCDIR)/Animal.hpp $(INCDIR)/Cat.hpp $(INCDIR)/Dog.hpp \
		$(INCDIR)/WrongAnimal.hpp $(INCDIR)/WrongCat.hpp Makefile 

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
