#include "Animal.h"
#include <iostream>

using namespace std;

void Animal::makeSound() const { //affiche le son de l'animal
    cout << "The sound of this animal is: " << sounds << endl;
}

void Animal::printInfo() const { //affiche les informations sur l'animal en question
    cout << "\nAnimal of type : " << type << "\n";
    cout << "Name: " << name << "\n";
    cout << "Color: " << color << "\n";
    cout << "Diet: " << diet << "\n";
    cout << "Habitat: " << habitat << "\n";
    cout << "Age: " << age << "\n";
    cout << (isPet ? "This animal is a pet" : "This animal is not a pet") << "\n";
    cout << "Weight: " << weight << "\n";
    cout << "Height: " << height << "\n";
}