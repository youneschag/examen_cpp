#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

class Animal {
public:
    // Constructeur par défaut
    Animal() : type(""), name(""), color(""), diet(""), habitat(""), sounds(""),
               isPet(false), age(0), weight(0.0), height(0.0) {}

    // Constructeur paramétré
    // On met const et l'adresse (&) pour ne pas créer de copie dans la mémoire
    Animal(const string& type, const string& name, const string& color,
           const string& diet, const string& habitat, const string& sounds,
           bool isPet, int age, double weight, double height)
        : type(type), name(name), color(color), diet(diet), habitat(habitat), sounds(sounds),
          isPet(isPet), age(age), weight(weight), height(height) {}

    // Constructeur de copie
    Animal(const Animal& other)
        : type(other.type), name(other.name), color(other.color), diet(other.diet),
          habitat(other.habitat), sounds(other.sounds), isPet(other.isPet),
          age(other.age), weight(other.weight), height(other.height) {}

    // Les méthodes setters
    void setType (const string& newType) {
        type=newType;
    }
    void setName(const string& newName) {
        name = newName;
    }
    void setColor(const string& newColor) {
        color = newColor;
    }
    void setDiet(const string& newDiet) {
        diet = newDiet;
    }
    void setHabitat(const string& newHabitat) {
        habitat = newHabitat;
    }
    void setSounds(const string& newSounds) {
        sounds = newSounds;
    }
    void setIsPet(bool newIsPet) {
        isPet = newIsPet;
    }
    void setAge(int newAge) {
        age = newAge;
    }
    void setWeight(double newWeight) {
        weight = newWeight;
    }
    void setHeight(double newHeight) {
        height = newHeight;
    }

    // Les méthodes getters
    string getType() const {
        return type;
    }
    string getName() const {
        return name;
    }
    string getColor() const {
        return color;
    }
    string getDiet() const {
        return diet;
    }
    string getHabitat() const {
        return habitat;
    }
    string getSounds() const {
        return sounds;
    }
    bool getIsPet() const {
        return isPet;
    }
    int getAge() const {
        return age;
    }
    double getWeight() const {
        return weight;
    }
    double getHeight() const {
        return height;
    }

    void makeSound() const; //fonction pour afficher le son de l'animal
    virtual void printInfo() const; //fonction virtuelle pour afficher les informations de l'animal

private:
    string type; //type de l'animal
    string name; //nom de l'animal
    string color; //couleur de l'animal
    string diet; //regime alimentaire de l'animal
    string habitat; //habitat de l'animal
    string sounds; //son de l'animal
    bool isPet; //si l'animal est considéré comme animal de compagnie
    int age; //son age
    double weight; //son poids
    double height; //sa taille
};
#endif