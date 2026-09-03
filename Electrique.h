#ifndef ELECTRIQUE_H o 
#define ELECTRIQUE_H

#include "Moteur.h"

class Electrique : public Moteur
{
public:
    Electrique();
    ~Electrique();

    float getTensionMax();
    void setTensionMax(float puissance);

private:
    float tensionMax;
};

#endif
