/*Programa que ayuda con las compras
en una tienda de videojuegos*/

#define c1 199 //declaro constantes los precios de las categorias 
#define c2 299
#define c3 399
#define c4 499
#define c5 1099

#include <stdio.h> //para printf, scanf y getchar

int main (int argc,char* argv []) //Funcion principial
{//abre funcion principal 
	unsigned char nombre[30]=['\0']; //declaro variable el nombre 
    	float compra1=0; //declaro variables el numero de videojuegos
	float compra2=0;
	float compra3=0;
	float compra4=0;
	float compra5=0;
	float s1=0; //declaro variables las compras 
	float s2=0;
	float s3=0;
	float s4=0;
	float s5=0;
	float total=0; //declaro variable la compra total 

	printf("\n\t %c%c==============================================%c%c",201,205,205,187);
	printf("\n\t %c                    Bienvenido                  %c",186,186);
	printf("\n\t %c Este algoritmo te ayudar%c a realizar tu compra %c",186,160,186);
    	printf("\n\t %c%c==============================================%c%c",200,205,205,188);

	printf("\n\t%cCual es tu nombre?\n\t",62); //pido nombre
	scanf( " %[^\n]", &nombre); //leo nombre 
    	printf("\n\t Hola %s\n",nombre); //imprimo nombre

    	printf("\n\t Cuantos videojuegos de la categor%ca 1 ($199) desea comprar?\n\t",161);//pido videojuegos de la categoria 1
    	scanf( "%f", &compra1);//leo compra

    	printf("\n\t Cuantos videojuegos de la categor%ca 2 ($299) desea comprar?\n\t",161);//pido videojuegos de la categoria 2
    	scanf( "%f", &compra2);//leo compra

    	printf("\n\t Cuantos videojuegos de la categor%ca 3 ($399) desea comprar?\n\t",161);//pido videojuegos de la categoria 3
    	scanf( "%f", &compra3);//leo compra

    	printf("\n\t Cuantos videojuegos de la categor%ca 4 ($499) desea comprar?\n\t",161);//pido videojuegos de la categoria 4
    	scanf( "%f", &compra4);//leo compra

   	 printf("\n\t Cuantos videojuegos de la categor%ca 5 ($1099) desea comprar?\n\t",161);//pido videojuegos de la categoria 5
    	scanf( "%f", &compra5);//leo compra
//Realizo las operaciones
    s1= c1*(compra1);
    s2= c2*(compra2);
    s3= c3*(compra3);
    s4= c4*(compra4);
    s5= c5*(compra5);
    total= (s1+s2+s3+s4+s5);

    	printf("\n\t%c El total de tu compra es:",62);//imprimo el resultado en el formato solicitado
    	printf("\n\tDe la Categoria 1 %.2f pesos",s1);
    	printf("\n\tDe la Categoria 2 %.2f pesos",s2);
    	printf("\n\tDe la Categoria 3 %.2f pesos",s3);
    	printf("\n\tDe la Categoria 4 %.2f pesos",s4);
    	printf("\n\tDe la Categoria 5 %.2f pesos",s5);
    	printf("\n\tCon un total de: %.2f pesos",total);
    	getchar();//atrapa el enter del scanf
    	getchar();//mantiene estatica la pantalla
	return 0; //termino la ejecucion 
} //cierro funcion principal
