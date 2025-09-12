#include "Moteur.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur par défaut
 */
Moteur::Moteur() {
    this->puissance = 20; // Valeur par défaut en entier
    cout << "Constructeur par défaut appelé !" << endl;
}

/**
 * \brief Destructeur
 */
Moteur::~Moteur() {
    cout << "Destruction du Moteur : " << this->puissance << "w" << endl;
}

/**
 * \brief Getter de puissance
 */
int Moteur::getPuissance() {
    return this->puissance;
}

/**
 * \brief Setter de puissance
 */
void Moteur::setPuissance(int puissance) {
    this->puissance = puissance;
}
