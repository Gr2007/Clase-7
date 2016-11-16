/* Realizar el código para las siguientes funciones que serán guardadas en una biblioteca para ser incluida
en un programa donde se declare un arreglo bidimensional estático de 3x3 cuadritos y se manden a
llamar las funciones para leer el arreglo pidiendo los valores al usuario, para imprimir el arreglo, para
sumar los elementos del arreglo y para cambiar el contenido de los cuadritos ubicados sobre la diagonal
principal por un número pedido al usuario. Las funciones deberán respetar los prototipos*/

#include <stdio.h>//para printf, scanf, getchar y se usa en mi biblioteca
#include "matriz.h"//llamo a mi biblioteca

int main(int argc, char* argv[]){//abro funcin principal
int r=3,c=3;//declaro mis variables e incilizo en tres por que es una matriz 3x3
float matriz[3][3],s,num;//Declaro mi matriz 3x3,mi variable para guardar la suma y num para los prototipos dados

    saludo();//llamo a saludo de mi biblioteca
    printf("\n\n");//agrego salto de linea para mi separador
separador_();//llamo a separador para distintiguir pasos
    printf("\n\n      Este programa lee, modifica, y suma los elementos de una funci%cn. \n\n",162);//proposito
separador_();//llamo a separador para distintiguir pasos
	leer_matriz(matriz,r,c);//llamo a funcion y le doy los valores que necesita

	separador_();//llamo a separador para distintiguir pasos
    printf("\n\t Se muestra la matriz\n\n");//indico que hara el programa
	imprimir_matriz(matriz,r,c);//llamo a funcion y le doy los valores que necesita

    s=sumar_elementos(matriz,r,c);//llamo a mi funcion y guardo el resultado en una variable

    separador_();//llamo a separador para distintiguir pasos
    printf("\n\n\t La suma de los elementos del arreglo es: %.2f\n\n",s);//imprimo la variable donde guarde la suma

    separador_();//llamo a separador para distintiguir pasos
    printf("\n\n\t Se modificar%cn los elementos de la diagonal principal\n\n",160);//indico que hara el programa
    printf("\n\tDa un valor para la diagonal principal:\t");//pido el valor para modificar
    scanf("%f", &num);//leo el valor
    cambia_diagonal(matriz,r,num);//llamo a funcion

    separador_();//llamo a separador para distintiguir pasos
    printf("\n Se muestra la matriz\n\n");//indico que hara el programa
    imprimir_matriz(matriz,r,c);//llamo a funcion

    saludo_();//llamo a funcion

	getchar();//para scanf
	getchar();//para pantalla estatica

	return 0;
}//cierro funcion
