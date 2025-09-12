#include <iostream>
#include "conducteur.h"
#include "Moteur.h"
#include "Electrique.h"
#include "Thermique.h"

using namespace std;

int main() {
    cout << "Hello World !" << endl;

    // --- Test conducteur ---
    Conducteur c1;

    cout << "Nom : " << c1.getNom()
        << ", Prénom : " << c1.getPrenom()
        << ", Année de naissance : " << c1.getAnneeNaissance() << endl;

    // --- Test moteur générique ---
    Moteur m1;
    cout << "Puissance actuelle : " << m1.getPuissance() << " ch" << endl;

    m1.setPuissance(150);
    cout << "Nouvelle puissance : " << m1.getPuissance() << " ch" << endl;

    // --- Test moteur électrique ---
    Electrique me;
    me.setPuissance(120);
    me.setTensionMax(400.5f);

    cout << "[Electrique] Puissance : " << me.getPuissance()
        << " ch, Tension max : " << me.getTensionMax() << " V" << endl;

    // --- Test moteur thermique ---
    Thermique mt;
    mt.setPuissance(200);
    mt.setCylindree(2.0f);

    cout << "[Thermique] Puissance : " << mt.getPuissance()
        << " ch, Cylindrée : " << mt.getCylindree() << " L" << endl;

    return 0;
}
