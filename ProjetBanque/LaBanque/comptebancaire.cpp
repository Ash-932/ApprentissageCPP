#include "comptebancaire.h"

CompteBancaire::CompteBancaire(const float _solde):
    solde (_solde)
{

}

    void CompteBancaire::Deposer(const float _montant)
{
        solde +=_montant;
}

bool CompteBancaire::Retirer(const float _montant)
{
    bool retour = false;
    if(_montant <= solde)
    {
        solde -=_montant;
        retour = true;
    }
    return retour;
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}
