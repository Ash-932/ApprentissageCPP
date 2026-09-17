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
    cout << left << setfill(' ') << "|" << setw(5) << format << left << setfill(' ') << "|" << setw(5) << resistance << endl;
}