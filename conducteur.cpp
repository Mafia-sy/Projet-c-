#include "Conducteur.h"

Conducteur::Conducteur() {
    nom = "Inconnu";
    prenom = "Inconnu";
    anneeNaissance = 2000;
    nbMotos = 0;
}

Conducteur::~Conducteur() {
}

std::string Conducteur::getNom() {
    return nom;
}

std::string Conducteur::getPrenom() {
    return prenom;
}

int Conducteur::getAnneeNaissance() {
    return anneeNaissance;
}

void Conducteur::addMoto(Moto newMoto) {
    if (nbMotos < 10) {
        mesMotos[nbMotos] = newMoto;
        nbMotos++;
    } else {
        std::cout << "Le garage est plein, impossible d'ajouter une nouvelle moto !" << std::endl;
    }
}

void Conducteur::rmMoto(int index) {
    if (index >= 0 && index < nbMotos) {
        for (int i = index; i < nbMotos - 1; i++) {
            mesMotos[i] = mesMotos[i + 1];
        }
        nbMotos--;
    } else {
        std::cout << "Index invalide." << std::endl;
    }
}

void Conducteur::afficheMotos() {
    if (nbMotos == 0) {
        std::cout << "Aucune moto dans le garage." << std::endl;
        return;
    }
    
    for (int i = 0; i < nbMotos; i++) {
        std::cout << "  - Moto " << i + 1 
                  << " : Poids = " << mesMotos[i].getPoids() 
                  << "kg, Puissance Moteur = " << mesMotos[i].getMoteur().getPuissance() 
                  << "W" << std::endl;
    }
}