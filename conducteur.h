#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <iostream>
#include <string>
#include "Moto.h"

class Conducteur {
public:
    Conducteur();
    ~Conducteur();

    // Getters
    std::string getNom();
    std::string getPrenom();
    int getAnneeNaissance();

    // Gestion des motos
    void addMoto(Moto newMoto);
    void rmMoto(int index); 
    void afficheMotos();

private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;

    Moto mesMotos[10]; 
    int nbMotos;       
};

#endif
