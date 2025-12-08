#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
    std::cout << "Default AMateria constructed" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria copy-constructed" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assigned." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destroyed." << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << this->type << " on " << target.getName() << " *" << std::endl;
}