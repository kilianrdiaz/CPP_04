#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal(void); // NOT virtual on purpose

        std::string getType() const;
        void makeSound() const; // NOT virtual on purpose
};

#endif // WRONGANIMAL_HPP
