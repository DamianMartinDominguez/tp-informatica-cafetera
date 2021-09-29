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
 	int *p;
 	p=&servicio;
 	(int)(*proceso[7])(int *p)={esperar,calentarAgua,colocandoCafe,servirAgua,calentarLeche,servirLeche,mezclarBebida};

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

