#ifndef VOITURE_H
#define VOITURE_H

#include <string>

using namespace std;

class CVoiture
{
private:
    string carburant;
    string marque;
    string modele;
    int puissance;
    int vitesse;

public:
    CVoiture(string carburant, string marque, string modele, int puissance);

    void accelerer(int);
    void afficher();
    void arreter();
    void demarrer();
    void ralentir(int);
};

#endif
