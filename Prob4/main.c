/* Realizar el código para las siguientes funciones que serán guardadas en una biblioteca para ser incluida
en un programa donde se declare un arreglo bidimensional estático de 3x3 cuadritos y se manden a
llamar las funciones para leer el arreglo pidiendo los valores al usuario, para imprimir el arreglo, para
sumar los elementos del arreglo y para cambiar el contenido de los cuadritos ubicados sobre la diagonal
principal por un número pedido al usuario. Las funciones deberán respetar los prototipos*/

#include <stdio.h>
#include "Matriz.h"

int main()
{
int r=3,c=3;
float matriz[3][3],s;
    printf("\n\n Este programa lee, modifica, y suma los elementos de una funci%cn. ",162);
    printf("\n\n");
	leer_matriz(matriz,r,c);
    printf("\n Se muestra la matriz\n\n");
	imprimir_matriz(matriz,r,c);

    s=sumar_elementos(matriz,r,c);

    printf("\n\n La suma de los elementos del arreglo es: %f",s);

    printf("\n\n Se modificar%cn los elementos de la diagonal principal\n\n",160);
    cambia_diagonal(matriz,r,c);
    printf("\n Se muestra la matriz\n\n");
    imprimir_matriz(matriz,r,c);

	getchar();
	getchar();

	return 0;
}
