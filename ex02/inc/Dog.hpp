#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* brain;

    public:
        Dog(void);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog(void);

        virtual void makeSound() const;
        Brain* getBrain() const;
};

#endif
