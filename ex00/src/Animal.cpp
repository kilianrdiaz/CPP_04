#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal default constructed (type: " << type << ")" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Animal copy-constructed (type: " << type << ")" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Animal assigned (type: " << type << ")" << std::endl;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructed (type: " << type << ")" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a generic sound." << std::endl;
}
