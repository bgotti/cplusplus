#include "couts.hpp"
#include <iostream>
#include <string>

Couts::Couts(string le_nom, int couts_sous)
{

  this->nom = le_nom;
  this->couts = couts_sous;
  std::cout << "Constructeur de Couts." << std::endl;
}

Couts::~Couts()
{
  std::cout << "Destructeur de Couts." << std::endl;
};