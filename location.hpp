#ifndef __LOCATION_HPP__
#define __LOCATION_HPP__
#include "couts.hpp"

class Location : public Couts
{
protected:
  int espace;

public:
  Location(string le_nom, int couts_sous, int espace);
  ~Location();
  double calculerCout() const;
};
#endif