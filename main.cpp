#include <iostream>
#include "couts.hpp"
#include "eau.hpp"
#include "location.hpp"
#include "electricite.hpp"
int main()
{
  // Tableau pour contenir les couts.
  Couts *lescouts[250];
  int nb_couts = 0;
  int choix = 0;
  do
  {
    //Menu
    std::cout << "== COUTS == " << std::endl;
    std::cout << " 1. Ajouter cout location." << std::endl;
    std::cout << " 2. Ajouter cout d'electricite." << std::endl;
    std::cout << " 3. Ajouter cout d'eau." << std::endl;
    std::cout << " 4. Afficher tous les couts rentres et couts totaux." << std::endl;
    std::cout << " 5. Quitter." << std::endl;
    std::cout << "Choix : ";
    std::cin >> choix;
    switch (choix)
    {
    case 1:
    {
      //Location
      std::string nom;
      int couts_sous;
      int espace;
      std::cout << "Entrer le nom du cout de location : ";
      std::cin >> nom;
      std::cout << "Entrer le cout en sous (int) : ";
      std::cin >> couts_sous;
      std::cout << "Entrer l'espace en metre-carrres. (int) : ";
      std::cin >> espace;
      // Ajouter le cout au tableau.
      lescouts[nb_couts] = new Location(nom, couts_sous, espace);
      nb_couts++;
      break;
    }
    case 2:
    {
      //Electricite
      std::string nom;
      int couts_sous;
      int voltage;
      int ampere;
      std::cout << "Entrer le nom du cout d'electricite : ";
      std::cin >> nom;
      std::cout << "Entrer le cout en sous (int) : ";
      std::cin >> couts_sous;
      std::cout << "Entrer le voltage (int) : ";
      std::cin >> voltage;
      std::cout << "Entrer l' amperage (int) : ";
      std::cin >> ampere;
      // Ajouter le cout au tableau.
      lescouts[nb_couts] = new Electricite(nom, couts_sous, voltage, ampere);
      nb_couts++;
      break;
    }
    case 3:
    {
      //Eau
      std::string nom;
      int couts_sous;
      double debit;
      std::cout << "Entrer le nom du cout d'eau : ";
      std::cin >> nom;
      //On a utiliser un int (entier) pour le cout d'eau en sous par L car il y avait une discrépance dans le TP1 0.5 et int
      std::cout << "Entrer le cout en sous (int) : ";
      std::cin >> couts_sous;
      std::cout << "Entrer le debit (double) : ";
      std::cin >> debit;
      // Ajouter le cout au tableau.
      lescouts[nb_couts] = new Eau(nom, couts_sous, debit);
      nb_couts++;
      break;
    }
    case 4:
    {
      int jour;
      std::cout << "=== Entrer le nombre de jours: ===" << std::endl;
      std::cin >> jour;

      // Afficher les couts et total.
      double total = 0.0;
      std::cout << "=== Les couts: ===" << std::endl;
      for (int i = 0; i < nb_couts; i++)
      {
        double montant = lescouts[i]->calculerCout();
        std::cout << " : ";
        std::cout << jour * montant << " $" << std::endl;
        total = total + montant;
      }
      std::cout << "Cout total : " << total * jour << " $ pour une periode de " << jour << " jour(s)." << std::endl;
      // Destruction des Constructeurs.
      if (nb_couts > 0)
      {
        for (int i = 0; i < nb_couts; i++)
          delete lescouts[i];
      }
      else

        break;
    }
    case 5:
    {
      std::cout << "\nAu revoir !\n"
                << std::endl;
      break;
    }
    default:
    {
      std::cout << "\nChoix invalide\n"
                << std::endl;
    }
    };
  } while (choix != 5);
}