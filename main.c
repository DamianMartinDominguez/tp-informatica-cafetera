#include "milibreria.h"



int main()
 {
 	int servicio=0;
	int estado=0;
 	int *p;
 	p=&servicio;
 	

 	while(1)
 	{

 	switch(estado)
 	{
 		case ESPERAR:	       estado=esperar(p);
 					break;

 		case CALENTAR_AGUA:    estado=calentarAgua(p);
 					break;
 		case COLOCANDO_CAFE:   estado=colocandoCafe(p);
 					break;
 		case SERVIR_AGUA:      estado=servirAgua(p);
 					break;
 		case CALENTAR_LECHE:   estado=calentarLeche(p);
 					break;
 		case SERVIR_LECHE:     estado=servirLeche(p);
 					break;
 		case MEZCLAR_BEBIDA:   estado=mezclarBebida(p);
 					break;

	 }
    }
 }


