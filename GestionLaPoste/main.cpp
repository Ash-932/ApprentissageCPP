#include <iostream>
#include <emballage.h>

using namespace std;

int main()
{
    Emballage colis1("XS", 1, 217, 150, 50);
    Emballage *colis2;
    colis2 = new Emballage("XS", 1, 270, 190);

    colis1.Visualiser();
    colis2->Visualiser();

    delete colis2;

    return 0;


}
