#include "Bird.h"
#include <iostream>

using namespace std;

void Bird::printInfo() const {
    Animal::printInfo(); //on prend les informations de l'animal grâce à Animal.cpp
    cout << "Wingspan: " << wingspan << " meters\n"; //on ajoute la nouvelle information sur l'envergure.
    makeSound();  // Appel de la fonction makeSound
}
