#ifndef VECTEUR_H
#define VECTEUR_H

#include <ostream>


// class Vecteur
// {
// public:
//     Vecteur(const int _x,const int _y);// ce premier constructeur initialise x et y avec les paramètres
//     Vecteur(); // celui-ci initialise x et y à 0
//     Vecteur operator+ (const Vecteur &_autre);
//     bool operator== (const Vecteur &_autre);
//     void Afficher();
// private:
//     int x;
//     int y;
// };
using namespace std;
class Vecteur
{
public:
    Vecteur(const int _x=0,const int _y=0);
    Vecteur();
    int getX() const;
    void setX(int _newX);
    int getY() const;
    void setY(int _newY);
    Vecteur operator+ (const Vecteur &_autre);
    bool operator==(const Vecteur &_autre);
    void Afficher();
    friend ostream & operator << (ostream &_flux,const Vecteur &_autre);
private:
    int x;
    int y;
};

#endif // VECTEUR_H
