#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //AAnimal a; // ❌ Debe fallar porque ahora Animal es abstracta

    AAnimal* list[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            list[i] = new Dog();
        else
            list[i] = new Cat();
    }

    for (int i = 0; i < 4; i++)
        list[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete list[i];

    return 0;
}

