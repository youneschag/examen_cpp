#include "Mammal.h"
#include <iostream>

using namespace std;

void Mammal::printInfo() const {
    Animal::printInfo(); //on prend les informations de l'animal grâce à Animal.cpp
    cout << "Fur Color: " << furColor << "\n"; //et on ajoute la nouvelle information sur la couleur de la fourrure
    makeSound();  // Appel de la fonction makeSound
}
