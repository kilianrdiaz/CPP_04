#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Cat constructed (type: " << type << ")" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy-constructed (type: " << type << ")" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    std::cout << "Cat assigned (type: " << type << ")" << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructed (type: " << type << ")" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
