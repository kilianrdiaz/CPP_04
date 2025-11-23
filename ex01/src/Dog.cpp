#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructed (with Brain)." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy-constructed (deep copy Brain)." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned (deep copy Brain)." << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Dog destroyed (with Brain)." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}
