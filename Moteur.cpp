#include "Moteur.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur par d�faut
 */
Moteur::Moteur() {
    this->puissance = 20; // Valeur par d�faut en entier
    cout << "Constructeur par d�faut appel� !" << endl;
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
