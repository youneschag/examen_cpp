#ifndef REPTILE_H
#define REPTILE_H
#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

class Reptile : public Animal {
public:
    //Construteur par défaut
    Reptile() : scalePattern("") {};

    //Constructeur paramétré
    Reptile(const string& type, const string& name, const string& color,
            const string& diet, const string& habitat, const string& sounds,
            bool isPet, int age, double weight, double height, const string& scalePattern)
        : Animal(type, name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

    // Constructeur de copie
    Reptile(const Reptile& other)
        : Animal(other) , scalePattern(other.scalePattern) {}

    void printInfo() const override;//override de la fonction virtuelle

    //La méthode getters
    string getScalePattern() const {
        return scalePattern;
    }

    //La méthode setters
    void setScalePattern(const string& newScalePattern) {
        scalePattern = newScalePattern;
    }

private:
    string scalePattern; //motif d'écailles du reptile

};

#endif