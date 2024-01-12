#include "Zoo.h"

#include <iostream>

using namespace std;

Zoo::Zoo() : name("Default Zoo"), animals(std::vector<Animal*>()) {}

Zoo::Zoo(const string& name) : name(name), animals(vector<Animal*>()) {}

Zoo::Zoo(const Zoo& other) : name(other.name) {
    for (const auto& animal : other.animals) {
        animals.push_back(new Animal(*animal));
    }
}

void Zoo::listAnimals() const {
    for (const auto& animal : animals) {
        animal->printInfo(); //affiche la liste des animaux présents dans le zoo
    }
}

bool Zoo::addAnimal(Animal* newAnimal) {
    if (animals.size() >= MAX_CAPACITY) {
        return false;
    } //le zoo n'a pas encore atteint sa capacité maximale

    //fonction lower_bound qui permet d'ajouter le nouvel animal tout en respectant l'ordre établi
    // sans créer un nouveau vecteur pour les classer.
    auto it = lower_bound(animals.begin(), animals.end(), newAnimal,
        [](const Animal* a, const Animal* b) {
            return a->getName() < b->getName();
        }
    );
    animals.insert(it, newAnimal); //ajout du nouvel animal
    return true;
}

int Zoo::searchAnimalByName(const string& name) const {
    for (size_t i = 0; i < animals.size(); ++i) {
        if (animals[i]->getName() == name) {
            return static_cast<int>(i); //retourne le nom de l'animal
        }
    }
    return -1; //l'animal n'existe pas
}

void Zoo::removeAnimalByName(const string& name){
    //fonction find_if permet de chercher l'animal parmi les animaux du zoo
    auto it = find_if(animals.begin(), animals.end(),
        [&name](const Animal* animal) {
            return animal->getName() == name;
        }
    );

    if (it != animals.end()) { // si l'animal se trouve parmi les animaux du zoo
        delete *it; // Supprime l'objet pointé
        animals.erase(it); // Supprime l'élément du vecteur
    } else {
        cout << "L'animal avec le nom' " << name << " ne se trouve pas dans le Zoo.\n";
    }
}

double Zoo::averageAgeForType(const string& type) const {
    double totalAge = 0.0;
    int count = 0;

    for (const auto& animal : animals) {
        if (animal->getType() == type) { // vérifier que le type d'animaux choisi est le bon.
            totalAge += static_cast<double>(animal->getAge()); //convertir l'age en double.
            ++count;
        }
    }
    // Calcul de la moyenne de l'âge total des animaux sur le nombre d'animaux
    return (count > 0) ? (totalAge / static_cast<double>(count)) : 0.0;
}