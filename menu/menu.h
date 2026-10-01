#include <string>
#ifndef MENU_H
#define MENU_H
using namespace std;

class Menu
{
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
  static void AttendreAppuiTouche();

private:
    string nom;
    string *options;
    int longueurMax;
    int nbOptions;
};

#endif // MENU_H
