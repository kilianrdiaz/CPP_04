#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal constructed." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Animal copy-constructed." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->type = other.type;

    std::cout << "Animal assigned." << std::endl;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destroyed." << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

// ⚠️ NO existe implementación de makeSound()
// porque es PURA VIRTUAL en ex02.
