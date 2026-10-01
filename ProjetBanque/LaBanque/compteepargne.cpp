#include "compteepargne.h"

CompteEpargne::CompteEpargne(const float _tauxinterets, const float _solde):
    tauxinterets(_tauxinterets) {}

void CompteEpargne::CalculerInterets()
{
    solde =  tauxinterets/100 * solde + solde;
}

void CompteEpargne::ModifierTaux(const float _taux)
{
    tauxinterets = _taux;
}
