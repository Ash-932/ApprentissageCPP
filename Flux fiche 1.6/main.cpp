

//BIENVENUE
//#include <iostream>
//using namespace std;
// int main()
// {
//     cout << "Bonjour " << endl << "Bienvenue en C++ !";
//     return 0;
// }

//FORMATAGE
//#include <iostream>
//using namespace std;
// int main()
// {
//     bool sortie = false;
//     int entier = 15;
//     char car = 'a';
//     cout << boolalpha << sortie << " " << entier << " " << car << endl;
//     return 0;
// }

//LECTURE
//#include <iostream>
//using namespace std;
// int main()
// {
//     float temperature;
//     float humidite;
//     int pression;
//     cout << "Saisir la température, l'humidité et la pression : " ;
//     cin >> temperature >> humidite >> pression ;
//     cout << "la température est : " << temperature << " °" << endl;
//     cout << "le taux d'humidité est : " << humidite << " %" << endl;
//     cout << "la pression est : " << pression << " hPa" << endl ;
//     return 0;
// }

//LECTUREMOT
// #include <iostream>
// using namespace std;
// int main()
// {
//     char phrase[80+1];
//     cout << "Saisir une phrase : " ;
//     cin >> phrase ;
//     cout << "Votre phrase est :" << phrase << endl;
//     return 0;
// }

//LECTURECHAINE
// #include <iostream> // pour cin et cout
// using namespace std;
// int main()
// {
//     char phrase[80+1];
//     cout << "Saisir une phrase : " ;
//     cin.getline(phrase,80) ;
//     cout << "Votre phrase est :" << phrase << endl;
//     return 0;
// }

//MANIPULATEURS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int val = 192;
//     cout << "Affichage par défaut : " << val << endl;
//     cout << "Affichage en hexadécimal : " << hex << val << endl;
//     cout << "Affichage en décimal : " << dec << val << endl;
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {

//     cout << setfill('-') << setw(15) << "hello" << setfill(' ') << endl;

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float val = 3.141592654;
//     cout << ": " << setprecision(4) << val << endl;
// }

//traitementsfichier
// #include <fstream>
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     string motCle ;
//     // string remplace un tableau de caractères. la taille de la chaîne est dynamique
//     string valeur;
//     ifstream fichier("/home/USERS/ELEVES/CIEL2025/amushietengoya/Flux/config");
//     if (!fichier.is_open())
//         cerr << "Erreur lors de l'ouverture du fichier" << endl;
//     else
//     {
//         do
//         {
//             // le fichier contient sur chaque ligne des couples mot clé + valeur
//             fichier >> motCle >> valeur ;
//             if (fichier.good())//Si les valeurs ont bien été lues
//             {
//                 cout << left << setw(10) << motCle << ": " << valeur << endl;
//                 // traitement des variables motCle et valeur
//             }
//         } while(!fichier.eof());
//     }
//     return 0 ;
// }

//Medailles
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string pays ;
    // string remplace un tableau de caractères. la taille de la chaîne est dynamique
    int nbMedaillesOr;
    int nbMedaillesArgent;
    int nbMedaillesBronze;
    ifstream fichier("/home/USERS/ELEVES/CIEL2025/amushietengoya/Flux/medailles");

    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        cout << "+" << setfill('-') << setw(21) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << endl;
        do
        {
            // ligne du haut

            // le fichier contient sur chaque ligne des couples mot clé + valeur
            fichier >> pays >> nbMedaillesOr >> nbMedaillesArgent >> nbMedaillesBronze ;
            if (fichier.good())//Si les valeurs ont bien été lues
            {

                cout << "|" << setfill(' ') << setw(20)<< left << pays << "|"
                     <<setfill(' ')<< setw(9) << right << nbMedaillesOr << "|"
                    << setfill(' ') << setw(9) << right << nbMedaillesArgent<< "|"
                     << setfill(' ') << setw(9) << nbMedaillesBronze <<  "|" << endl;
                // traitement des variables motCle et valeur
            }
        } while(!fichier.eof());
        cout << "+" << setfill('-') << setw(21) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << setfill('-') << setw(10) << "+" << endl;

    }
    return 0 ;
}


// #include <fstream>
// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <fstream>


// using namespace std;
// int main()
// {
//     string pays;
//     int orr;
//     int argent;
//     int bronze;
//     ifstream ifichier("/home/USERS/ELEVES/CIEL2025/squerrec/CPP_TD0_fiche1-6/medailles.txt");
//     ofstream ofichier("/home/USERS/ELEVES/CIEL2025/squerrec/CPP_TD0_fiche1-6/tableau_medailles.txt");
//     if (!ifichier.is_open())
//         cerr << "Erreur lors de l'ouverture du fichier" << endl;
//     else
//     {
//         ofichier << "+" << setfill('-') << setw(30) << '+' << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << endl;

//         do
//         {
//             // le fichier contient sur chaque ligne des couples mot clé + valeur
//             ifichier >> pays >> orr >> argent >> bronze;
//             if (ifichier.good())//Si les valeurs ont bien été lues
//             {

//                 ofichier << setfill(' ');
//                 ofichier << left << setw(30) << pays
//                          << "|" << setw(10) << orr
//                          << "|" << setw(10) << argent
//                          << "|" << setw(10) << bronze
//                          << "|" << setw(10) << bronze + orr + argent<< "|" << endl;

//             }
//         } while(!ifichier.eof());

//         ofichier << right << "+" << setfill('-') << setw(30) << '+' << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << setfill('-') << setw(11) << "+" << endl;
//     }
//     return 0 ;
// }