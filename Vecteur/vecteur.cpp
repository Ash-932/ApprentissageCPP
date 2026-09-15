#include "vecteur.h"

Vecteur::Vecteur(const int _x, const int _y) :
    x(_x), y(_y)
{

}


Vecteur::Vecteur()
{

}

ostream & operator << (ostream &_flux,const Vecteur &_autre)
{
    _flux << "(" <<_autre.x << "," << _autre.y << ")" << endl ;
    return _flux;
}

Vecteur Vecteur::operator+(const Vecteur &_autre)
{
    return Vecteur(x +_autre.x, y + _autre.y);
}

bool Vecteur::operator==(const Vecteur &_autre)
{
    bool retour = false;
    if(x == _autre.x && y == _autre.y)
        retour = true;
    return retour;
}

void Vecteur::Afficher()
{

}