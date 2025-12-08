#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected: 
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();
        [...]
        std::string const & getType() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target); 
};

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        ~Ice();

        AMateria* clone() const = 0;
        void use(ICharacter& target);
}

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif