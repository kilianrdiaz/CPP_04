#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal a; // ❌ Debe fallar porque ahora Animal es abstracta

    Animal* list[4];
    for (int i = 0; i < 4; i++)
        list[i] = (i % 2 == 0) ? (Animal*)new Dog() : (Animal*)new Cat();

    for (int i = 0; i < 4; i++)
        list[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete list[i];

    return 0;
}
