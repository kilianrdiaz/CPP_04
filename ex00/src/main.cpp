#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Polymorphism example ===" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    std::cout << std::endl << "=== WrongAnimal example (no virtual) ===" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* wc = new WrongCat();

        std::cout << "WrongCat type via WrongAnimal*: " << wc->getType() << std::endl;

        wc->makeSound();
        meta->makeSound();

        delete meta;
        delete wc;
    }

    return 0;
}
