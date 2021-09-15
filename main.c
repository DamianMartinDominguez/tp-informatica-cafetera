#include "milibreria.h"

#define ESPERAR        0
#define CALENTAR_AGUA  1
#define COLOCANDO_CAFE 2
#define SERVIR_AGUA    3
#define CALENTAR_LECHE 4
#define SERVIR_LECHE   5
#define MEZCLAR_BEBIDA 6


int main()
 {
 	int servicio=0;
	int estado=0;
 	int *p,*r;
 	p=&servicio;
 	r=&estado;

 	while(1)
 	{

 	switch(estado)
 	{
 		case ESPERAR:	      esperar(p,r);
 					break;

 		case CALENTAR_AGUA:   calentarAgua(p,r);
 					break;
 		case COLOCANDO_CAFE:   colocandoCafe(p,r);
 					break;
 		case SERVIR_AGUA:     servirAgua(p,r);
 					break;
 		case CALENTAR_LECHE:   calentarLeche(p,r);
 					break;
 		case SERVIR_LECHE:    servirLeche(p,r);
 					break;
 		case MEZCLAR_BEBIDA:   mezclarBebida(p,r);
 					break;

	 }
    }
 }


