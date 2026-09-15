#include "compteur.h"

Compteur::Compteur(const int _valeurInit, int const _pas):
    valeur(_valeurInit),
    pas(_pas)
{}

Compteur::~Compteur()
{

}

void Compteur::Incrementer()
{
    valeur+=pas;
}

void Compteur::Decrementer()
{
    valeur-=pas;
}

void Compteur::Reinitialiser()
{
    valeur = 0;
}

Compteur Compteur::operator+(const Compteur &_autre)
{
    Compteur resultat(valeur + _autre.valeur, pas);
    return resultat;
}

bool Compteur::operator==(const Compteur &_autre)
{
    bool egaux = false;
    if (valeur == _autre.valeur && pas == _autre.pas)
    {
        egaux = true;
    }
    return egaux;
}

int Compteur::getPas() const
{
    return pas;
}

void Compteur::setPas(int newPas)
{
    pas = newPas;
}

int Compteur::getValeur() const
{
    return valeur;
}

void Compteur::setValeur(int newValeur)
{
    valeur = newValeur;
}

std::ostream& operator<<(std::ostream &_flux, const Compteur &_cpt)
{
    _flux << "Compteur (valeur=" << _cpt.valeur << ", pas=" << _cpt.pas << ")";
    return _flux;
}