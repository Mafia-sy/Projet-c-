#include <iostream>
#include "conducteur.h"
#include "Moto.h"

using namespace std;

int main() {
    cout << "Hello World !" << endl;

    // Conducteurs
    Conducteur c1;
    Conducteur c2("ISMAIL", "BARAKAT", 1990);

    // Motos
    Moto m1("Yamaha R1");
    Moto m2("Kawasaki Ninja");

    // Ajout de motos
    c2.addMoto(m1);
    c2.addMoto(m2);

    // Affichage
    cout << "Nom : " << c2.getNom()
        << ", Prénom : " << c2.getPrenom()
        << ", Année de naissance : " << c2.getAnneeNaissance() << endl;

    c2.afficheMotos();

    // Suppression d’une moto
    c2.rmMoto(m1);
    c2.afficheMotos();

    return 0;
}
