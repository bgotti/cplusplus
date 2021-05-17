#ifndef __COUTS_HPP__
#define __COUTS_HPP__
#include <string>

using namespace std;

class Couts
{
protected:
  string nom;
  int couts;

public:
  Couts(string le_nom, int couts_sous);
  virtual double calculerCout() const = 0;
  //Destructeur
  virtual ~Couts();
};
#endif
