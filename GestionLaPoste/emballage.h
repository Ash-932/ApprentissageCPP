#ifndef EMBALLAGE_H
#define EMBALLAGE_H
#include<iostream>
#include <string>
#include <iostream>

using namespace std;

class Emballage
{
public:
    Emballage(const string &_format, const int _resistance, const int _longueur, const int _largeur, const int _hauteur = 0);
    ~Emballage();
    void Visualiser();
    double const CalculerVolume() const;
    bool operator <(const Emballage &_autre);
    bool operator ==(const Emballage &_autre);

private:
    string format;
    int resistance;
    int longueur;
    int largeur;
    int hauteur;
    int stock;

};

#endif // EMBALLAGE_H
