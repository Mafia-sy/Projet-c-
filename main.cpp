#include <iostream>
#include "conducteur.h"

using namespace std;

int main() {
    cout << "Hello World !" << endl;

    // Création d’un conducteur (constructeur par défaut)
    Conducteur c1;

    // Utilisation des getters
    cout << "Nom : " << c1.getNom()
        << ", Prénom : " << c1.getPrenom()
        << ", Année de naissance : " << c1.getAnneeNaissance() << endl;

    return 0;
}
