#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat constructed (type: " << type << ")" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy-constructed (type: " << type << ")" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat assigned (type: " << type << ")" << std::endl;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructed (type: " << type << ")" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat says meow? (but it's the WrongAnimal behavior if called via base pointer)" << std::endl;
}
