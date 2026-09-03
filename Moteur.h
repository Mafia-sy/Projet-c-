#ifndef MOTEUR_H
#define MOTEUR_H

#include <iostream>
#include <string>

class Moteur
{
public:
    // Constructeur par defaut
    Moteur();

    // Destructeur
    ~Moteur();

    // Getter & Setter
    int getPuissance();
    void setPuissance(int puissance);

private:
    int puissance;
};

#endif
