#include "Electrique.h"

Electrique::Electrique() {
    tensionMax = 0.0f;
}

Electrique::~Electrique() {
}

float Electrique::getTensionMax() {
    return tensionMax;
}

void Electrique::setTensionMax(float puissance) {
    this->tensionMax = puissance;
}