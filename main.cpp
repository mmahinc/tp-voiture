/*******************************************************
Nom           : main.cpp
Role          : Test de la classe CVoiture
Auteur        : MAHINC Mathias
Version       : V1.0 du 05/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 main.cpp Voiture.cpp -o application_voiture
********************************************************/

#include "Voiture.h"
#include <iostream>

using namespace std;

int main()
{
    CVoiture voiture("Essence", "Peugeot", "208", 100);

    cout << "Informations de la voiture :" << endl;
    voiture.afficher();

    voiture.demarrer();

    cout << "Acceleration de 50 km/h :" << endl;
    voiture.accelerer(50);
    voiture.afficher();

    cout << "Ralentissement de 20 km/h :" << endl;
    voiture.ralentir(20);
    voiture.afficher();

    voiture.arreter();

    cout << "Etat final :" << endl;
    voiture.afficher();

    return 0;
}
