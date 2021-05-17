#include "location.hpp"
#include <iostream>
Location::Location(string le_nom, int couts_sous, int espace) : Couts(le_nom, couts_sous)
{
  this->espace = espace;
  std::cout << "Constructeur de Location." << std::endl;
}
double Location::calculerCout() const
{
  const double nb_jours_mois = 30;
  double calcul = this->couts / nb_jours_mois * this->espace / 100.0;
  std::cout << this->nom;
  return calcul;
}

Location::~Location()
{
  std::cout << "Destructeur de Location." << std::endl;
};
