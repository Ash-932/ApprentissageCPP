#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H

#include<iostream>
#define gpio_num_t int
using namespace std;

class CapteurHumidite
{
public:
    CapteurHumidite(const gpio_num_t _brocheCapteur);
    int MesureHumiditeDuSol();
private:

    gpio_num_t brocheCapteur;

};
#endif // CAPTEURHUMIDITE_H
