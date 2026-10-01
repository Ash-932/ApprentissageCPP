#include "zonearrosage.h"

using namespace std;

ZoneArrosage::ZoneArrosage(int _numZone, const gpio_num_t _commandeVanne, const gpio_num_t _senseAVanne,
                           const gpio_num_t _senseBVanne, const gpio_num_t _brocheHumidite):
    numZone(_numZone),laVanne(_commandeVanne,_senseAVanne,_senseBVanne), leCapteur(_brocheHumidite)
{
    cout << "Constructeur de ZoneArrosage" << endl;
}
