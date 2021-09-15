#include "milibreria.h"


 void esperar(int *p, int *r)
 {

 	int *pNuevo;
 	int *rNuevo;

 	pNuevo=p;
 	rNuevo=r;


	printf("\ningrese que desea tomar\n");
	printf("1. Te\t 2. cafe\t 3. cafe con leche\n");
	printf("\n");
 	fflush(stdin);
 	scanf("%d",pNuevo);

 	if((*pNuevo)!=0)
 	{

 		*rNuevo=1;

 	}

 }


 void calentarAgua(int *p, int *r)//estado 1
 {

 	int *pNuevo;
 	int *rNuevo;
 	int temperaturaAgua=10;
 	int setAgua= 85;

 	pNuevo=p;
 	rNuevo=r;


	printf("\ningrese la temperatura del agua\n");//simboliza la lectura del sensor de temperatura

 	fflush(stdin);
 	scanf("%d",&temperaturaAgua);

 	if(temperaturaAgua>(setAgua-1))
    {
 	  printf("\nel agua esta caliente.\n");

      if(*pNuevo==1)//si el servicio es te pasa a servir el agua
 		*rNuevo=3;
 	  else//si el servicio no es te pasa a colocar cafe
 		*rNuevo=2;

    }

 }

 void colocandoCafe(int *p, int *r)//estado 2
 {

 	int *pNuevo;
 	int *rNuevo;


 	pNuevo=p;
 	rNuevo=r;


	printf("\ncolocando cafe\n");
 		*rNuevo=3;
}

void servirAgua(int *p, int *r)//estado 3
 {

 	int *pNuevo;
 	int *rNuevo;


 	pNuevo=p;
 	rNuevo=r;


	printf("\nsirviendo agua\n");
	if(*pNuevo==1)//si el servicio es te se termina el proceso
 		*rNuevo=0;
 	  else
      {if(*pNuevo==2)//si el servicio es cafe solo pasa a mezclar bebida
 		*rNuevo=6;
 	  else//si el servicio es cafe con leche pasa a calentar leche
 		*rNuevo=4;
      }
}


void calentarLeche(int *p, int *r)//estado 4
 {

 	int *pNuevo;
 	int *rNuevo;
 	int temperaturaLeche=10;
 	int setLeche=75;


 	pNuevo=p;
 	rNuevo=r;

    printf("\ningrese la temperatura de la leche\n");//simboliza la lectura del sensor de temperatura

 	fflush(stdin);
 	scanf("%d",&temperaturaLeche);

 	if(temperaturaLeche>(setLeche-1))
    {
 	  printf("\nla leche esta caliente.\n");

 		*rNuevo=5;
    }
}

void servirLeche(int *p, int *r)//estado 5
 {

 	int *pNuevo;
 	int *rNuevo;


 	pNuevo=p;
 	rNuevo=r;


	printf("\nsirviendo leche\n");
 		*rNuevo=6;
}

void mezclarBebida(int *p, int *r)//estado 6
 {

 	int *pNuevo;
 	int *rNuevo;


 	pNuevo=p;
 	rNuevo=r;


	printf("\nmezclando bebida\n");
 		*rNuevo=0;
}

