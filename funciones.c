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

 		return 1;

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
 		return 3;
 	  else//si el servicio no es te pasa a colocar cafe
 		return 2;

    }

 }

int colocandoCafe(int *p)//estado 2
 {

 	int *pNuevo;
 


 	pNuevo=p;
 


	printf("\ncolocando cafe\n");
 		return 3;
}

int servirAgua(int *p)//estado 3
 {

 	int *pNuevo;
 	

 	pNuevo=p;
 	


	printf("\nsirviendo agua\n");
	if(*pNuevo==1)//si el servicio es te se termina el proceso
 		return 0;
 	  else
      {if(*pNuevo==2)//si el servicio es cafe solo pasa a mezclar bebida
 		return 6;
 	  else//si el servicio es cafe con leche pasa a calentar leche
 		return 4;
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

 		return 5;
    }
}

int servirLeche(int *p, int *r)//estado 5
 {

 	int *pNuevo;
 	


 	pNuevo=p;
 


	printf("\nsirviendo leche\n");
 		return 6;
}

int mezclarBebida(int *p)//estado 6
 {

 	int *pNuevo;



 	pNuevo=p;
 


	printf("\nmezclando bebida\n");
 		return 0;
}

