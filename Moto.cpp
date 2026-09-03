#include "Moto.h"

// Constructeur par d�faut
Moto::Moto() : poids(0), moteur() {}

// Destructeur
Moto::~Moto() {
    std::cout << "Moto d�truite" << std::endl;
}

// Getter Poids
int Moto::getPoids() {
    return poids;
}

// Setter Poids
void Moto::setPoids(int p) {
    poids = p;
}

// Getter Moteur
Moteur Moto::getMoteur() {
    return moteur;
}

// Setter Moteur
void Moto::setMoteur(Moteur m) {
    moteur = m;
}

