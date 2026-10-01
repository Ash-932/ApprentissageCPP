#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"
#include <cmath>

class Rectangle : public Forme
{
public:
    Rectangle(const string &_couleur, const float _longueur, const float _largeur, const float _epaisseurTrait);
    ~Rectangle();
    float CalculerSurface();


private:
    float longueur;
    float largeur;
};

#endif // RECTANGLE_H
