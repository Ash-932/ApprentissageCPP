#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

// int main()
// {
//     CompteBancaire compteB;
//     float montant = 0;
//     int choix;
//     Menu leMenu("compteBancaire.txt");
//     do
//     {
//         choix = leMenu.Afficher();
//         switch (choix)
//         {
//         case OPTION_1:
//             cout << "Vous avez choisi l'option n°1" << endl;
//             cout << compteB.ConsulterSolde() << endl;
//             Menu::AttendreAppuiTouche();
//             break;
//         case OPTION_2:
//             cout << "Vous avez choisi l'option n°2. Entrez le montant : " << endl;
//             cin >> montant;
//             compteB.Deposer(montant);
//             cout << "Nouveau solde : " << compteB.ConsulterSolde() << endl;
//             //cout << compteB.Deposer(montant) << endl;
//             Menu::AttendreAppuiTouche();
//             break;
//         case OPTION_3:
//             cout << "Vous avez choisi l'option n°3. Entrez le montant :" << endl;
//             cin >> montant;
//             compteB.Retirer(montant);
//             cout << "Nouveau solde : " << compteB.ConsulterSolde() << endl;
//             Menu::AttendreAppuiTouche();
//             break;
//         case OPTION_4:
//             cout << "Vous avez choisi l'option n°4" << endl;
//             Menu::AttendreAppuiTouche();
//             break;

//         }
//     } while(choix != QUITTER);
//     cout << "Vous avez choisi l'option n°5" << endl;
//     return 0;
// }

int main()
{
    CompteEpargne compteE;
    CompteBancaire compteB;
    float montant = 0;
    int choix;
    Menu leMenu("compteEpargne.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            cout << compteB.ConsulterSolde() << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2. Entrez le montant : " << endl;
            cin >> montant;
            compteB.Deposer(montant);
            cout << "Nouveau solde : " << compteB.ConsulterSolde() << endl;
            //cout << compteB.Deposer(montant) << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3. Entrez le montant :" << endl;
            cin >> montant;
            compteB.Retirer(montant);
            cout << "Nouveau solde : " << compteB.ConsulterSolde() << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            compteE.CalculerInterets();
            Menu::AttendreAppuiTouche();
            break;

        }
    } while(choix != QUITTER);
    cout << "Vous avez choisi l'option n°5" << endl;
    return 0;

}