#include "Thermique.h"

Thermique::Thermique() {
    cylindree = 0.0f;
}

Thermique::~Thermique() {
}

float Thermique::getCylindree() {
    return cylindree;
}

void Thermique::setCylindree(float newCylindree) {
    this->cylindree = newCylindree;
}