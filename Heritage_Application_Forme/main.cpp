
#include <iostream>
#include "rectangle.h"
#include "cercle.h"
using namespace std;
int main()
{
    // Instancier un Rectangle rouge, trait 1.5, 10x4
    Rectangle r("rouge", 1.5, 10.0, 4.0);
    // Affiche : Constructeur Forme
    // Affiche : Constructeur Rectangle
    // Instancier un Cercle bleu, trait 0.5, rayon 7
    Cercle c("bleu", 0.5, 7.0);
    // Affiche : Constructeur Forme
    // Affiche : Constructeur Cercle
    r.Afficher();              // appelle Afficher() héritée de Forme
    c.Afficher();              // appelle Afficher() héritée de Forme
    cout << "Surface Rectangle : " << r.CalculerSurface() << endl;  // 40
    cout << "Surface Cercle    : " << c.CalculerSurface() << endl;  // ~153.94
    return 0;
}
