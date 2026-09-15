#ifndef COMPTEUR_H
#define COMPTEUR_H

#include<ostream>
using namespace std;
class Compteur
{
public:
    Compteur(int _valeurInit = 0, int const _pas = 1);
    ~Compteur();
    void Incrementer();
    void Decrementer();
    void Reinitialiser();




    Compteur operator+(const Compteur&_autre);
    bool operator==(const Compteur&_autre);
     friend std::ostream& operator<<(std::ostream& _flux, const Compteur& _cpt);

    int getPas() const;
    void setPas(int newPas);

    int getValeur() const;
    void setValeur(int newValeur);

private:
    int valeur;
    int pas;


};

#endif // COMPTEUR_H
