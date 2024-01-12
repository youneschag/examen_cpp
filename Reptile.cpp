#include "Reptile.h"
#include <iostream>

using namespace std;

void Reptile::printInfo() const {
    Animal::printInfo();//on prend les informations de l'animal grâce à Animal.cpp
    cout << "Scale Pattern: " << scalePattern << "\n";//et on ajoute la nouvelle information sur le motif d'écaille du reptile
    makeSound();  // Appel de la fonction makeSound
}