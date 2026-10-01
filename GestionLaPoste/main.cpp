#include <iostream>
#include <emballage.h>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    // Emballage colis1("XS", 1, 217, 150, 50);
    // Emballage *colis2;
    // colis2 = new Emballage("XS", 1, 270, 190);

    // colis1.Visualiser();
    // colis2->Visualiser();

    // delete colis2;

    // return 0;

    // Emballage *tabColis[5];
    // string format;
    // int resistance;
    // int longueur;
    // int largeur;
    // int hauteur;

    // for (int indice = 0; indice < 5; indice++)
    // {
    //     cout << "Nom du format : ";
    //     getline(cin,format);
    //     cout << "Resistance : ";
    //     cin >> resistance;
    //     cout << "Longueur : ";
    //     cin >> longueur;
    //     cout << "Largeur : ";
    //     cin >> largeur;
    //     cout << "Hauteur : ";
    //     cin >> hauteur;

    //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     tabColis[indice] = new Emballage(format, resistance, longueur, largeur, hauteur);
    // }

    // cout << '+' << setfill('-')<< setw(18)<<'+'
    //      << setw(13) << "+" << setw(18) << '+' << endl;
    // cout << "| " << left << setfill(' ') << setw(16) << "Format"
    //      << "| " << setw(11)<< "Resistance"
    //      << "| " << setw(16) << "Dimensions" << "| " << endl;
    // cout << '+' << right << setfill('-') << setw(18) << '+'
    //      << setw(13) << '+' << setw(18) << '+'<< endl;
    // cout << setfill(' ');

    // for (int i=0; i<2; i++)
    // {
    //     tabColis[i]->Visualiser();
    // }

    // cout << '+' << right << setfill('-') << setw(18) << '+'
    //      << setw(13) << '+' << setw(18) << '+'<< endl;

    // for (int i=0; i<3; i++){
    //     delete tabColis[i];
    // }

    Emballage colis1("M", 3, 230, 130, 100);
    Emballage colis2("L", 5, 315, 210, 157);
    Emballage colis3("L", 5, 315, 210, 157);

    if (colis1 < colis2)
        cout << "colis1 est plus petit que colis2" << endl;
    else
        cout << "colis1 est plus grand que colis2" << endl;


    if (colis3 == colis2)
        cout << "colis3 est identique à colis2" << endl;
    else
        cout << "colis3 n'est pas identique à colis2" << endl;
    if (colis3 == colis1)
        cout << "colis3 est identique à colis1" << endl;
    else
        cout << "colis3 n'est pas identique à colis1" << endl;


    return 0;

}
