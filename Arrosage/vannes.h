#ifndef VANNES_H
#define VANNES_H

#include<iostream>
#define gpio_num_t int
using namespace std;

class Vannes
{
public:
    Vannes(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB);
    void Ouvrir();
    void Fermer();

private :

    gpio_num_t impulsion;
    gpio_num_t sensA;
    gpio_num_t sensB;
};

#endif // VANNES_H
