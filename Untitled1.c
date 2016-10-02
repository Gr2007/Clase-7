
#define c1 199
#define c2 299
#define c3 399
#define c4 499
#define c5 1099
//#define nombredelusuario 0

#include <stdio.h>

int main (int argc,char* argv []) //Funcion principial
{
	unsigned char nombre[30];
	float compra1=0;
	float compra2=0;
	float compra3=0;
	float compra4=0;
	float compra5=0;
	float s1=0;
	float s2=0;
	float s1=0;
	float s1=0;
	float s1=0;

	printf("\n %c%c==============================================%c%c",201,205,205,187);
	printf("\n %c                    Bienvenido                  %c",186,186);
	printf("\n %c Este algoritmo te ayudar%c a realizar tu compra %c",186,160,186);
    printf("\n %c%c==============================================%c%c",200,205,205,188);

	printf("\n\t%cCual es tu nombre?\n\t",62);
	scanf( "%s", &nombre);
    printf("\n\t Hola %s\n",nombre);

    printf("\n\t %cCuantos videojuegos de la categor%ca 1 ($199) desea comprar?\n\t",62,161);
    scanf( "%f", &compra1);

    printf("\n\t %cCuantos videojuegos de la categor%ca 2 ($299) desea comprar?\n\t",62,161);
    scanf( "%f", &compra2);

    printf("\n\t %cCuantos videojuegos de la categor%ca 3 ($399) desea comprar?\n\t",62,161);
    scanf( "%f", &compra3);

    printf("\n\t %cCuantos videojuegos de la categor%ca 4 ($499) desea comprar?\n\t",62,161);
    scanf( "%f", &compra4);

    printf("\n\t %cCuantos videojuegos de la categor%ca 5 ($1099) desea comprar?\n\t",62,161);
    scanf( "%f", &compra5);

    s1= c1*(compra1);
    s2= c2*(compra2);
    s3= c3*(compra3);
    s4= c4*(compra4);
    s5= c5*(compra5);

    getchar();
	return 0;
}
