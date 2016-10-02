#include <stdio.h>

int main (int argc,char* argv []) //Funcion principial
{
	short peque=0;
	double doble=0;
	char letra='\0';
	printf("Este programa lee y guarda tipos de datos\n\n");

	printf("Ingresa un entero peque%co: ",164);
	scanf("%hd", &peque);

	printf("\nIngresa un flotante largo: ");
	scanf("%lf", & doble);
    getchar();
	printf("\nIngresa un caracter: ");
	scanf("%c", &letra);

	printf("\n\n\t Entero peque%co: %hd",164,peque);
	printf("\n\n\t Flotante largo: %g",doble);
	printf("\n\n\t Caracter: %c",letra);
    getchar();
	getchar();
	return 0;
}
