#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Materia constructed." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice Materia copy-constructed." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice Materia assigned." << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice Materia destroyed." << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}