#include <iostream>
#include "conducteur.h"
#include "Moteur.h"

using namespace std;

int main() {
    cout << "Hello World !" << endl;

    // Création d’un conducteur (constructeur par défaut)
    Conducteur c1;

    // Utilisation des getters
    cout << "Nom : " << c1.getNom()
         << ", Prénom : " << c1.getPrenom()
         << ", Année de naissance : " << c1.getAnneeNaissance() << endl;

    // Création d’un moteur
    Moteur m1;

    cout << "Puissance actuelle : " << m1.getPuissance() << "w" << endl;

    m1.setPuissance(150);
    cout << "Nouvelle puissance : " << m1.getPuissance() << "w" << endl;

    return 0;
}
