#ifndef FORME_H
#define FORME_H
#include <string>
#include <iostream>

using namespace std;

class Forme
{
public:
    Forme(const string &_couleur, const float _epaisseurTrait );
    ~Forme();
    void Afficher();

protected:
    string couleur;
    float epaisseurTrait;

};

#endif // FORME_H
