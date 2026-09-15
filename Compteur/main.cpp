#include <iostream>
#include "compteur.h"

int main()
{
    Compteur c1;        // valeur=0, pas=1
    Compteur c2(10, 2); // valeur=10, pas=2

    c1.Incrementer();   // valeur=1
    c1.Incrementer();   // valeur=2
    c1.Decrementer();   // valeur=1

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;

    Compteur c3 = c1 + c2; // valeur=11, pas=1
    std::cout << c3 << std::endl;

    // Correction de style : Ajout des accolades pour respecter les bonnes pratiques
    if(c1 == c2) {
        std::cout << "egaux" << std::endl;
    }
    else {
        std::cout << "differents" << std::endl;
    }

    c2.Reinitialiser();
    std::cout << c2 << std::endl;

    return 0; // Un seul return en fin de fonction, conforme à la règle
}
