#include "Cola.h"

Cola::Cola(){
    this->H=NULL;
    this->T=NULL;
}

Cola::Cola(int dato){
    Nodo *m= new Nodo(dato);
    this->H = m;
    this->T = H;
}

bool Cola::IsVacio(){
    return (this->H == NULL && this->T == NULL);
}

void Cola::Encolar(int dato){
    Nodo *m= new Nodo(dato);
    
      if (IsVacio())
	{
	this->T=m;
	this->H=m;
	return ;
	}
	
    this->T->Sig=m->Sig;
    this->T=m;
    std::cout<<"dato introducido"<<std::endl;
return ;
}

int Cola::Desencolar(){	
    int d=this->H->Dato;
    
	if (IsVacio()){
	  std::cout<<"La lista esta vacia."<<std::endl;
	  return d;
	  }
	  
    Nodo *aux = this->H;
    this->H=this->H->Sig;
    
	if (this->H == NULL)
	  this->T=NULL;
	
    aux->Sig=NULL;
    std::cout<<"dato expulsado"<<std::endl;
    return d;
}

Nodo* Cola::Buscar(int ref){
    Nodo *aux = this->H;
    
	if (IsVacio()){
	  std::cout<<"La lista esta vacia."<<std::endl;
	  return NULL;
	  }
	  
    while(aux->Dato != ref){
      
	if(aux->Sig == NULL){
	  std::cout<<"No Existe la Referencia"<<std::endl;
	  return NULL;
	  }
    }
  return aux;
}

