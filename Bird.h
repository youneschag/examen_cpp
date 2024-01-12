#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

class Bird : public Animal {
public:
    //Contructeur par défaut
    Bird() : wingspan(0.0) {}

    //Contrsuteur paramétré
    Bird(const string& type, const string& name, const string& color, const string& diet,
         const string& habitat, const string& sounds, bool isPet, int age, double weight,
         double height, double wingspan)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan) {}

    //Constructeur par copie
    Bird(const Bird& other)
        : Animal(other), wingspan(other.wingspan) {}

    void printInfo() const override; //override de la fonction virtuelle
    
    // La méthode getters
    double getWingspan() const {
        return wingspan;
    }
    
    // La méthode setters
    void setWingspan(double newWingspan) {
        wingspan = newWingspan;
    }

private:
    double wingspan; //envergure
};

#endif