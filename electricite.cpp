#include "electricite.hpp"
#include <iostream>
Electricite::Electricite(string le_nom, int couts_sous, int voltage, int ampere) : Couts(le_nom, couts_sous)
{
  this->voltage = voltage;
  this->ampere = ampere;
  std::cout << "Constructeur d'Electricite." << std::endl;
}

double Electricite::calculerCout() const
{
  const int nb_heure_jour = 24;
  double calcul = this->couts / 100.0 * this->voltage * this->ampere / 1000.0 * nb_heure_jour;
  std::cout << this->nom;
  return calcul;
}

Electricite::~Electricite()
{
  std::cout << "Destructeur d'Electricite." << std::endl;
};
