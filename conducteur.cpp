#include "conducteur.h"
using namespace std;

/**
 * \brief Constructeur par défaut
 */
Conducteur::Conducteur() {
    this->nom = "Kersten";
    this->prenom = "Noah";
    this->anneeNaissance = 2006;

    cout << "Constructeur par défaut appelé !" << endl;
}

/**
 * \brief Destructeur
 */
Conducteur::~Conducteur() {
    cout << "Destruction du conducteur : "
        << this->nom << " " << this->prenom
        << " (" << this->anneeNaissance << ")" << endl;
}

/**
 * \brief Getters
 */
string Conducteur::getNom() { return this->nom; }
string Conducteur::getPrenom() { return this->prenom; }
int Conducteur::getAnneeNaissance() { return this->anneeNaissance; }
