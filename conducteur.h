#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <iostream>
#include <string>
#include "Moto.h"   // Ajout pour utiliser la classe Moto

class Conducteur
{
public:
    // Constructeurs
    Conducteur();
    Conducteur(std::string nom, std::string prenom, int anneeNaissance);

    // Destructeur
    ~Conducteur();

    std::string getNom();
    std::string getPrenom();
    int getAnneeNaissance();

    // Gestion des motos
    void afficheMotos();
    void addMoto(Moto newMoto);
    void rmMoto(Moto rmMoto);

private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    Moto mesMotos[10];  // Tableau fixe de 10 motos
    int nbMotos;        // Nombre de motos ajoutées
};

#endif
