/*******************************************************
Nom           : Voiture.h
Role          : Declaration de la classe CVoiture
Auteur        : MAHINC Mathias
Version       : V1.0 du 05/10/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Voiture.cpp
********************************************************/

#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture
{
private:
    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;

public:
    CVoiture(std::string c, std::string ma, std::string mo, int p);

    void accelerer(int);
    void afficher();
    void arreter();
    void demarrer();
    void ralentir(int);
};

#endif
