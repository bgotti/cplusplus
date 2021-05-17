#ifndef __EAU_HPP__
#define __EAU_HPP__
#include "couts.hpp"

class Eau : public Couts
{
protected:
  double debit;
  //on a utiliser un int (entier) pour le cout d'eau en sous par L

public:
  Eau(string le_nom, int couts_sous, double debit);
  ~Eau();
  double calculerCout() const;
};
#endif
