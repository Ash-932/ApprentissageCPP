/**
 * @file vannes.cpp
 * @author Asher Mushiete Ngoya
 * @date 22/09/2026
 * @version 1.0
 * @brief Implementation de la classe Vannes
 *
 * @details Ce fichier contient la déclaration de la classe vannes
 *           la classe vannes ouvre et ferme la vanne.
 */



#include "vannes.h"

using namespace std;

/**
 * @brief Vannes::Vannes Construit un objet Vanne avec les broches fournies en paramètre.
 *
 * @param _brocheImpulsion Numéro de la broche délivrant des impulsions.
 * @param _sensA Numéro de la broche servant au senseur A.
 * @param _sensB Numéro de la broche servant au senseur B.
 */
Vannes::Vannes(const gpio_num_t _brocheImpulsion, const gpio_num_t _sensA, const gpio_num_t _sensB):
    impulsion(_brocheImpulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    cout << "Construction de vanne." << endl;
}

/**
 * @brief Vannes::Ouvrir Méthode servant à l'ouverture de la vanne.
 */
void Vannes::Ouvrir()
{
    cout << "Ouverture de la vanne " << impulsion << endl;
}

/**
 * @brief Vannes::Fermer Méthode servant à la fermeture de la vanne.
 */
void Vannes::Fermer()
{
    cout << "Fermeture de la vanne " << impulsion << endl;
}
