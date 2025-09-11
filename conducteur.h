#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <iostream>
#include <string>

class Conducteur
{
public:
    // Constructeur par défaut
    Conducteur();

    // Destructeur
    ~Conducteur();

    // Getters
    std::string getNom();
    std::string getPrenom();
    int getAnneeNaissance();

private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
};

#endif
