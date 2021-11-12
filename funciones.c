#include "milibreria.h"



 int esperar(int *p)
 {

 	int *pNuevo;
 	

 	pNuevo=p;
 


	printf("\ningrese que desea tomar\n");
	printf("1. Te\t 2. cafe\t 3. cafe con leche\n");
	printf("\n");
 	fflush(stdin);
 	scanf("%d",pNuevo);

 	if((*pNuevo)!=0)
 	{

 		return CALENTAR_AGUA;

 	}

 }


 int calentarAgua(int *p)//estado 1
 {

 	int *pNuevo;
 	int *rNuevo;
 	int temperaturaAgua=10;
 	int setAgua= 85;

 	pNuevo=p;
 	


	printf("\ningrese la temperatura del agua\n");//simboliza la lectura del sensor de temperatura

 	fflush(stdin);
 	scanf("%d",&temperaturaAgua);

 	if(temperaturaAgua>(setAgua-1))
    {
 	  printf("\nel agua esta caliente.\n");

      if(*pNuevo==1)//si el servicio es te pasa a servir el agua
 		return SERVIR_AGUA;
 	  else//si el servicio no es te pasa a colocar cafe
 		return COLOCANDO_CAFE;

    }
	return CALENTAR_AGUA;
 }

int colocandoCafe(int *p)//estado 2
 {

 	int *pNuevo;
 


 	pNuevo=p;
 


	printf("\ncolocando cafe\n");
 		return SERVIR_AGUA;
}

int servirAgua(int *p)//estado 3
 {

 	int *pNuevo;
 	

 	pNuevo=p;
 	


	printf("\nsirviendo agua\n");
	if(*pNuevo==1)//si el servicio es te se termina el proceso
 		return ESPERAR;
 	  else
      {if(*pNuevo==2)//si el servicio es cafe solo pasa a mezclar bebida
 		return MEZCLAR_BEBIDA;
 	  else//si el servicio es cafe con leche pasa a calentar leche
 		return CALENTAR_LECHE;
      }
}


int calentarLeche(int *p)//estado 4
 {

 	int *pNuevo;
 
 	int temperaturaLeche=10;
 	int setLeche=75;


 	pNuevo=p;
 

    printf("\ningrese la temperatura de la leche\n");//simboliza la lectura del sensor de temperatura

 	fflush(stdin);
 	scanf("%d",&temperaturaLeche);

 	if(temperaturaLeche>(setLeche-1))
    {
 	  printf("\nla leche esta caliente.\n");

 		return SERVIR_LECHE;
    }
	return CALENTAR_LECHE;
}

int servirLeche(int *p)//estado 5
 {

 	int *pNuevo;
 	


 	pNuevo=p;
 


	printf("\nsirviendo leche\n");
 		return MEZCLAR_BEBIDA;
}

int mezclarBebida(int *p)//estado 6
 {

 	int *pNuevo;



 	pNuevo=p;
 


	printf("\nmezclando bebida\n");
 		return ESPERAR;
}

