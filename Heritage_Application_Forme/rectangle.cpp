#include "rectangle.h"



Rectangle::Rectangle(const string &_couleur, const float _longueur, const float _largeur, const float _epaisseurTrait) : Forme(_couleur, _epaisseurTrait),
    longueur(_longueur),
    largeur(_largeur)
{
    cout<< "constructeur de rectangle" << endl;
}

Rectangle::~Rectangle()
{
    cout<< "destructeur de rectangle" << endl;
}

float Rectangle::CalculerSurface()
{

    return longueur*largeur;
}
