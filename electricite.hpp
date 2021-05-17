#ifndef __ELECTRICITE_HPP__
#define __ELECTRICITE_HPP__
#include "couts.hpp"
class Electricite : public Couts
{
protected:
  int voltage;
  int ampere;

public:
  Electricite(string le_nom, int couts_sous, int voltage, int ampere);
  ~Electricite();
  double calculerCout() const;
};
#endif
