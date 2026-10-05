/*******************************************************
Nom           : Voiture.cpp
Role          : Definition des methodes de la classe CVoiture
Auteur        : MAHINC Mathias
Version       : V1.0 du 05/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Voiture.cpp
********************************************************/

#include "Voiture.h"
#include <iostream>

using namespace std;

CVoiture::CVoiture(string c, string ma, string mo, int p)
{
    carburant = c;
    marque = ma;
    modele = mo;
    puissance = p;
    vitesse = 0;
}

void CVoiture::accelerer(int v)
{
    vitesse = vitesse + v;
}

void CVoiture::afficher()
{
    cout << marque << endl;
    cout << modele << endl;
    cout << carburant << endl;
    cout << puissance << endl;
    cout << vitesse << endl;
}

void CVoiture::arreter()
{
    vitesse = 0;
}

void CVoiture::demarrer()
{
    cout << "La voiture demarre" << endl;
}

void CVoiture::ralentir(int v)
{
    vitesse = vitesse - v;
}
