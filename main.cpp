#include <iostream>
#include "Conducteur.h"
#include "Moto.h"
#include "Moteur.h"
#include "Electrique.h"
#include "Thermique.h"

using namespace std;

int main() {
    cout << "===== Début du programme =====" << endl;

    // 1) Création d’un conducteur
    Conducteur c1; // valeurs par défaut dans le constructeur

    // 2) Création d’une moto électrique
    Electrique moteurElec;
    moteurElec.setPuissance(120);
    moteurElec.setTensionMax(400.5f);

    Moto motoElec;
    motoElec.setPoids(180);
    motoElec.setMoteur(moteurElec);

    // 3) Création d’une moto thermique
    Thermique moteurTherm;
    moteurTherm.setPuissance(200);
    moteurTherm.setCylindree(2.0f);

    Moto motoTherm;
    motoTherm.setPoids(220);
    motoTherm.setMoteur(moteurTherm);

    // 4) Attribution des deux motos au conducteur
    c1.addMoto(motoElec);
    c1.addMoto(motoTherm);

    // 5) Affichage des informations
    cout << "\n--- Infos Conducteur et ses motos ---" << endl;
    cout << "Conducteur : " << c1.getNom() << " " << c1.getPrenom()
        << " (" << c1.getAnneeNaissance() << ")" << endl;
    c1.afficheMotos();

    cout << "===== Fin du programme =====" << endl;
    return 0;
}
