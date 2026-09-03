#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur {
public:
    Thermique();
    ~Thermique();

    float getCylindree();
    void setCylindree(float newCylindree);

private:
    float cylindree;
};

#endif