#include "Cola.h"

int main()
{
  
menu:
	int opc,dato,g;
        Cola c(dato);

system("clear");
std::cout<<"Ingresa la opcion que quieras: \n\n  "<<std::endl;
std::cout<<"Opcion 1: Encolar "<<std::endl;
std::cout<<"Opcion 2: Desencolar "<<std::endl;
std::cout<<"Opcion 3: Salir "<<std::endl;
std::cin>> opc ; 


switch(opc){
	case 1:
		std::cout<<"Introduce el dato:"<<std::endl;
		std::cin>> dato;
		c.Encolar(dato);
		break;
	case 2:
		c.Desencolar();
		break;
	case 3:
		return 0;
		break;
		
	default:
	std::cout<<"Opcion Invalida"<<std::endl;
	break;
}

std::cout<<"Deseas repetir el programa si=1 no=0 "<<std::endl;
std::cin>>g;

if (g==1)
    goto menu;

return 0;
  
}
