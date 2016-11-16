
#include <stdio.h>
#ifndef _matriz_H_
#define _matriz_H_


void leer_matriz(float matriz[3][3], int r, int c){//primer funcion
	int i,j;

    printf("\n\tIngresa las entradas de la Matriz \n\n");
  for(i=1;i<=r;i++)
   {
	for(j=1;j<=c;j++)
	 {
	  printf("Da un valor para la coordenada [%d][%d]:  ",i,j);
	  scanf("%f",&matriz[i][j]);
	 }
	}
}

void imprimir_matriz(float matriz[3][3], int r, int c){//segunda funcion
int i,j;
  for(i=1;i<=r;i++)
   {
	for(j=1;j<=c;j++)
	 {
		  printf("\t\t    %f",matriz[i][j]);
	 }

	  printf("\t\t\t\n");
   }
}

float sumar_elementos(float matriz[3][3], int r, int c){//tercera funcion
	int i,j;
	float suma=0;

for(i=1;i<=r;i++)
	 {
		for(j=1;j<=c;j++)
			suma=suma+matriz[i][j];
    }
    return suma;
    }


void cambia_diagonal(float matriz[3][3], int r, float numero){//cuarta funcion
	int i;
	for(i=1;i<=r;i++)
	{
				  printf("\nDa un valor para la diagonal principal [%d][%d]:  ",i,i);
	  			  scanf("%f", &matriz[i][i]);
		}

}


#endif


