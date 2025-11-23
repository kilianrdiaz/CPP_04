#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Dog constructed (type: " << type << ")" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy-constructed (type: " << type << ")" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    std::cout << "Dog assigned (type: " << type << ")" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructed (type: " << type << ")" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
