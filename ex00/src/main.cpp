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
        const Animal* d = new Dog();
        const Animal* c = new Cat();

        std::cout << c->getType() << " " << std::endl;
        std::cout << d->getType() << " " << std::endl;

        c->makeSound();
        d->makeSound();
        meta->makeSound();

        delete meta;
        delete d;
    }

    std::cout << std::endl << "=== WrongAnimal example (no virtual) ===" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* wac = new WrongCat();
        const WrongCat* wc = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << wac->getType() << " " << std::endl;
        std::cout << wc->getType() << " " << std::endl;

        meta->makeSound();
        wc->makeSound();
        wac->makeSound();

        delete meta;
        delete wc;
        delete wac;
    }

    return 0;
}
