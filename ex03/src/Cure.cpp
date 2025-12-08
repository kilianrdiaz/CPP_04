#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Materia constructed." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure Materia copy-constructed." << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure Materia assigned." << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Materia destroyed." << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}