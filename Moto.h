#ifndef MOTO_H.
#define MOTO_H

#include <iostream>
#include "Moteur.h"

class Moto {
public:
    // Constructeur et destructeur
    Moto();
    ~Moto();

    // Getters
    int getPoids();
    Moteur getMoteur();

    // Setters
    void setPoids(int p);
    void setMoteur(Moteur m);

private:
    int poids;
    Moteur moteur;
};

#endif
