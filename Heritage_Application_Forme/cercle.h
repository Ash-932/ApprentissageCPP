#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"
#include <cmath>

class Cercle : public Forme
{
public:

    Cercle(const string &_couleur, const float _rayon, const float _epaisseurTrait);
    ~Cercle();
    float CalculerSurface();

private:
    float rayon;
};

#endif // CERCLE_H
