#include "Moteur.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur par defaut
 */
Moteur::Moteur() {
    this->puissance = 30; // Valeur par d�faut en entier
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
