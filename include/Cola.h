#include "Nodo.h"

class Cola{

public:
  Nodo *H,*T;
  int Dato;
  Cola(int Dato);
  Cola();
  void Encolar(int Dato);
  int Desencolar();
  bool IsVacio();
  Nodo * Buscar(int ref);
};
