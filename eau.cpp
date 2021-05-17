#include "eau.hpp"
#include <iostream>
Eau::Eau(string le_nom, int couts_sous, double debit_eau) : Couts(le_nom, couts_sous)
{
  this->debit = debit_eau;
  std::cout << "Constructeur d'Eau." << std::endl;
}
double Eau::calculerCout() const
{
  const int nb_sec_jour = 86400;
  double calcul = this->couts / 1000.0 * this->debit * nb_sec_jour;
  std::cout << this->nom;
  return calcul;
}

Eau::~Eau()
{
  std::cout << "Destructeur d'Eau." << std::endl;
};
