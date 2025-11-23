#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Array of Animals ===" << std::endl;
    const int N = 10;
    Animal* animals[N];

    for (int i = 0; i < N; i++)
    {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < N; i++)
        animals[i]->makeSound();

    for (int i = 0; i < N; i++)
        delete animals[i];

    std::cout << "\n=== Deep Copy Test ===" << std::endl;

    Dog a;
    a.getBrain()->setIdea(0, "I want a bone!");

    Dog b = a;

    std::cout << "Dog A idea: " << a.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog B idea: " << b.getBrain()->getIdea(0) << std::endl;

    a.getBrain()->setIdea(0, "I want another bone!");

    std::cout << "Dog A idea (changed): " << a.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog B idea (should NOT change): " << b.getBrain()->getIdea(0) << std::endl;

    return 0;
}

