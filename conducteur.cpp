#include "Conducteur.h"

using namespace std;

Conducteur::Conducteur() : nom("Kersten"), prenom("Noah"), anneeNaissance(2006), nbMotos(0) {}

Conducteur::~Conducteur() {
    cout << "Destruction du conducteur : " << nom << " " << prenom << " (" << anneeNaissance << ")" << endl;
}

string Conducteur::getNom() { return nom; }
string Conducteur::getPrenom() { return prenom; }
int Conducteur::getAnneeNaissance() { return anneeNaissance; }

void Conducteur::addMoto(Moto newMoto) {
    if (nbMotos < 10) {
        mesMotos[nbMotos] = newMoto;
        nbMotos++;
    }
    else {
        cout << "Impossible d'ajouter plus de 10 motos !" << endl;
    }
}

void Conducteur::rmMoto(int index) {
    if (index >= 0 && index < nbMotos) {
        for (int i = index; i < nbMotos - 1; i++) {
            mesMotos[i] = mesMotos[i + 1];
        }
        nbMotos--;
    }
}

void Conducteur::afficheMotos() {
    cout << "Motos de " << nom << " " << prenom << " :" << endl;
    for (int i = 0; i < nbMotos; i++) {
        cout << "Moto " << (i + 1) << " → Poids : " << mesMotos[i].getPoids()
            << " kg, Puissance moteur : " << mesMotos[i].getMoteur().getPuissance() << " ch" << endl;
    }
}
