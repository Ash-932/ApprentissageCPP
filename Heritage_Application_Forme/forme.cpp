#include "forme.h"


#include "forme.h"
Forme::Forme(const string &_couleur,const float _epaisseurTrait)
    :couleur(_couleur)
    ,epaisseurTrait(_epaisseurTrait)
{
    cout << "constructeur Forme" << endl;
}
Forme::~Forme()
{
    cout << "destructeur Forme" << endl;
}
void Forme::Afficher()
{
    cout << "Forme : Couleur " << couleur << " trait " << epaisseurTrait << endl;
}