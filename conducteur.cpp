#include "conducteur.h"
using namespace std;

/**
 * \brief Constructeur par défaut
 */
Conducteur::Conducteur() {
    this->nom = "Kersten";
    this->prenom = "Noah";
    this->anneeNaissance = 2006;
    this->nbMotos = 0;

    cout << "Constructeur par défaut appelé !" << endl;
}

/**
 * \brief Constructeur avec paramètres
 */
Conducteur::Conducteur(string nom, string prenom, int anneeNaissance) {
    this->nom = nom;
    this->prenom = prenom;
    this->anneeNaissance = anneeNaissance;
    this->nbMotos = 0;

    cout << "Constructeur avec paramètres appelé !" << endl;
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

/**
 * \brief Affiche toutes les motos du conducteur
 */
void Conducteur::afficheMotos() {
    cout << "Motos de " << this->prenom << " :" << endl;
    if (nbMotos == 0) {
        cout << "  Aucune moto." << endl;
    }
    else {
        for (int i = 0; i < nbMotos; i++) {
            cout << "  - " << mesMotos[i].getModele() << endl;
        }
    }
}

/**
 * \brief Ajoute une moto
 */
void Conducteur::addMoto(Moto newMoto) {
    if (nbMotos < 10) {
        mesMotos[nbMotos] = newMoto;
        nbMotos++;
    }
    else {
        cout << "Impossible d'ajouter plus de motos !" << endl;
    }
}

/**
 * \brief Supprime une moto
 */
void Conducteur::rmMoto(Moto rmMoto) {
    for (int i = 0; i < nbMotos; i++) {
        if (mesMotos[i].getModele() == rmMoto.getModele()) { 
            for (int j = i; j < nbMotos - 1; j++) {
                mesMotos[j] = mesMotos[j + 1];
            }
            nbMotos--;
            cout << "Moto retirée : " << rmMoto.getModele() << endl;
            return;
        }
    }
    cout << "Moto non trouvée !" << endl;
}
