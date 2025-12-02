#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("AAnimal")
{
    std::cout << "AAnimal constructed." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
    std::cout << "AAnimal copy-constructed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        this->type = other.type;

    std::cout << "AAnimal assigned." << std::endl;
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destroyed." << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}

// ⚠️ NO existe implementación de makeSound()
// porque es PURA VIRTUAL en ex02.
