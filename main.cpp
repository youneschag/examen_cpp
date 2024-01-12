#include "Zoo.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Animal.h"

int main() {
    // Création d'un zoo
    Zoo Zoo("Alsace Zoo");

    // Ajout d'animaux au zoo
    Bird* parrot = new Bird("Bird", "Polly", "Colorful", "Seeds", "Tropical", "Squawk", true, 5, 0.5, 0.3, 0.6);
    Mammal* lion = new Mammal("Mammal", "Leo", "Golden", "Meat", "Savannah", "Roar", false, 8, 200, 1.2, "Golden");
    Reptile* snake = new Reptile("Reptile", "Slippy", "Green", "Rodents", "Forest", "Hiss", true, 3, 1.5, 0.5, "Striped");

    Zoo.addAnimal(parrot);
    Zoo.addAnimal(lion);
    Zoo.addAnimal(snake);

    // Affichage des animaux dans le zoo
    cout << "List of animals in " << Zoo.getName() << ":\n";
    Zoo.listAnimals();

    // Suppression d'un animal par son nom
    Zoo.removeAnimalByName("Leo");

    // Affichage mis à jour après la suppression
    cout << "\nList of animals in " << Zoo.getName() << " after removing Leo:\n";

    Zoo.listAnimals();

    // Recherche d'un animal par son nom
    string searchName = "Polly";
    int foundIndex = Zoo.searchAnimalByName(searchName);
    if (foundIndex != -1) {
        cout << "\nAnimal with name '" << searchName << "' found at index " << foundIndex << endl;
    } else {
        cout << "\nAnimal with name '" << searchName << "' not found in " << Zoo.getName() << endl;
    }

    // Ajout de nouveaux animaux
    Bird* canary = new Bird("Bird", "Pola", "Colorful", "Seeds", "Tropical", "Squawk", true, 9, 1.4, 1.7, 0.6);
    Mammal* tiger = new Mammal("Mammal", "Franky", "Golden", "Meat", "Savannah", "Roar", false, 6, 250, 2.2, "Golden");

    Zoo.addAnimal(canary);
    Zoo.addAnimal(tiger);

    Zoo.listAnimals();

    // Calcul de la moyenne d'âge pour un type spécifique
    cout << "\nAverage age for the type 'Bird': " << Zoo.averageAgeForType("Bird") << " years\n";

    // Voir si la capacité du zoo est dépassé ou pas
    Reptile* Seahorse = new Reptile("Reptile", "George", "Green", "Rodents", "Forest", "Hiss", true, 5, 2.5, 0.9, "Striped");

    Zoo.addAnimal(Seahorse);

    Zoo.listAnimals();

    return 0;
}