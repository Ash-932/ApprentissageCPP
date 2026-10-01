#include <iomanip>
#include <iostream>
#include <string>
#include "emballage.h"

using namespace std;

Emballage::Emballage(const string &_format, const int _resistance, const int _longueur, const int _largeur, const int _hauteur):
    format(_format),
    resistance(_resistance),
    longueur(_longueur),
    largeur(_largeur),
    hauteur(_hauteur),
    stock(0)

{
    cout << "Constructeur : Emballage / " << format << endl;
}

Emballage::~Emballage()
{
    cout << "Destructeur : Emballage / " << format << endl;
}

void Emballage::Visualiser()
{
    cout << "| " << left << setw(16) << format
         << "| " << resistance << setw(10) << " kg"
         << "|" << setw(3) << longueur << " X " <<
        setw(3) << largeur;
    if (hauteur != 0)
        cout << left << " X " << setw(4) << hauteur << '|' << endl;
    else
        cout << right << setw(8) << '|' << endl;
}

const double Emballage::CalculerVolume() const
{
    int volume;
    if(hauteur != 0)
        volume = longueur * largeur * hauteur;
    else
        volume = longueur * largeur;
    double volumecm3 = volume / 1000.0;

    return volumecm3;

}



bool Emballage::operator <(const Emballage &_autre)
{
    return (CalculerVolume() < _autre.CalculerVolume());
}

bool Emballage::operator ==(const Emballage &_autre)
{
    return (longueur == _autre.longueur && largeur == _autre.largeur &&
    hauteur == _autre.hauteur && resistance == _autre.resistance);
}

