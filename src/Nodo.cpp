#include "Nodo.h"


Nodo::Nodo(int dato,Nodo *sig)
{
    Dato=dato;
    Sig=sig;
}

Nodo::Nodo(int dato){
    Dato=dato;
    Sig=NULL;
}
