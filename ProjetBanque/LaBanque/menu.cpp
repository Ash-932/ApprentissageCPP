#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <iomanip>


using namespace std;

Menu::Menu(const string &_nom): nom(_nom), options(nullptr), longueurMax(0), nbOptions(0)
{
    ifstream fichierMenu("/home/USERS/ELEVES/CIEL2025/amushietengoya/ApprentissageCPP/ProjetBanque/LaBanque/compteBancaire.txt");
    if (!fichierMenu.is_open())
    {
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
        nbOptions = 0;
    } else
    {
    nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));

        fichierMenu.clear();
        fichierMenu.seekg(0, ios::beg);

        options = new string[nbOptions];
        string item;
        int longueur;

        for (int i = 0; i < nbOptions; i++) {
            getline(fichierMenu, item);
            if (!item.empty() && item.back() == '\r')
                item.pop_back();
            int longueur = static_cast<int>(item.length());
            if (longueur > 0) {
                options[i] = item;
                if (longueur > longueurMax) longueurMax = longueur;
            } else {
                nbOptions--;
                i--;
            }
        }
    }
}

Menu::~Menu()
{
    delete [] options;
}

int Menu::Afficher()
{

    int choix = -1;



    cout << right <<"+" << setfill('-') << setw(5) << "+"<< setw(longueurMax + 3) << "+" << endl;
    cout << setfill(' ');

    for (int i = 0; i < nbOptions; i++)
    {
        cout << "| " << right << setw(2) << i + 1
             << " | " << left << setw(longueurMax) << options[i]
             << " |" << endl;
    }

    cout << right << "+" << setfill('-') << setw(5) << "+"<< setw(longueurMax + 3) << "+" << endl;
    cout << setfill(' ');
            do{
    cout << "Votre choix : ";
    if(!(cin >> choix))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choix = -1;
    }

    cin.clear();
            }while(choix < 1 || choix > nbOptions);

    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    cout << "\033[2J\033[1;1H";
}
