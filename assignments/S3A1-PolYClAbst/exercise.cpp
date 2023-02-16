#include <iostream>

#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"

int main() 
{
  Envio *e[5];
  double totCosto{0};

  e[0] = new Envio();
  e[1] = new Envio("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10,0);
  e[2] = new Paquete("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10,0, 1, 0.50);
  e[3] = new Sobre("Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220","Diego","Luis Elizondo 357","Mty", "NL","876",3.50,25,10,0,2.50);
  e[4] = new Sobre("Diego","Luis Elizondo 357","Mty", "NL","876","Ricardo","Rio Piaxtla 457","Culiacan", "Sinaloa","80220",3.50,25,35,0,2.50);

  for (auto i=0; i<5; i++)
  {
    e[i]->print_reDir();
    e[i]->print_deDir();
    std::cout << "Costo envio " << i << " => $ " << e[i]->calculaCosto() << "\n";

    totCosto+=e[i]->calculaCosto();
  }

  std::cout << "GRAN TOTAL DE TODOS LOS ENVIOS => $ " << totCosto << "\n";

// Liberando la memoria asignada -----------------------------

  for (auto i=0; i<5; i++)
  {
    delete e[i];
  }
}