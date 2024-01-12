#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

class Mammal : public Animal {
public:
    // Constructeur par défaut
    Mammal() : furColor("") {}

    //Constructeur paramétré
    // On met const et l'adresse (&) pour ne pas créer de copie dans la mémoire
    Mammal(const string& type, const string& name, const string& color, const string& diet,
           const string& habitat, const string& sounds, bool isPet, int age, double weight,
           double height, const string& furColor)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

    // Constructeur de copie
    Mammal(const Mammal& other)
        : Animal(other), furColor(other.furColor) {}

    void printInfo() const override;//override de la fonction virtuelle
   
    // La méthode getters
    string getFurColor() const {
        return furColor;
    }

    // La méthode setters
    void setFurColor(const string& newFurColor) {
        furColor = newFurColor;
    }

private:
    string furColor; //couleur de la fourrure
};

#endif
