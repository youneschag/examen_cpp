#ifndef ZOO_H
#define ZOO_H
#include "Animal.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Zoo : public Animal {
public:
    //Constructeur par défaut
    Zoo();

    //Constructeur paramétré
    explicit Zoo(const string& name);

    //Constructeur par copie
    Zoo(const Zoo& other);

    //La méthode getters
    string getName() const {
        return name;
    }

    //La méthode setters
    void setName(const string& newName) {
        name = newName;
    }

    //imprime les informations des animaux dans le zoo
    void listAnimals() const;

    //ajoute un animal dans le zoo tant qu'il y a de la place
    bool addAnimal(Animal* newAnimal);

    //chercher un  animal à partir de son nom
    int searchAnimalByName(const string& name) const;

    //enleve un animal du zoo à partir du nom
    void removeAnimalByName(const string& name); // pas de const car j'ai un erase dans cpp, donc il va modifier animals.

    //rend l'âge moyen des animaux
    double averageAgeForType(const string& type) const;

    string predictTypeWithKNN(const Animal& newAnimal, int k, const string& dataType) const;

private:
    string name; //Nom du zoo
    static const int MAX_CAPACITY = 4; //La capacité maximale du zoo
    vector<Animal*> animals; //Les animaux dans le zoo
};

#endif