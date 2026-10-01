#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#include "vannes.h"
#include "capteurhumidite.h"
#include <iostream>
#define gpio_num_t int
using namespace std;

class ZoneArrosage
{
private:
    Vannes laVanne;
    CapteurHumidite leCapteur;
    int numZone;
public:
    ZoneArrosage(int _numZone,
                 const gpio_num_t _commandeVanne,
                 const gpio_num_t _senseAVanne,
                 const gpio_num_t _senseBVanne,
                 const gpio_num_t _brocheHumidite);
    void Piloter();
};
#endif // ZONEARROSAGE_H
