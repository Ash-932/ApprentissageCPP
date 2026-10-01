#include "cercle.h"
#include <cmath>

Cercle::Cercle(const string &_couleur, float _rayon, float _epaisseurTrait) : Forme(_couleur, _epaisseurTrait),
    rayon(_rayon)
{

}

Cercle::~Cercle()
{

}

float Cercle::CalculerSurface()
{
    return 3.14159*rayon*rayon;
}
