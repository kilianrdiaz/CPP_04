#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructed (with Brain)." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy-constructed (deep copy Brain)." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned (deep copy Brain)." << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat destroyed (with Brain)." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}
