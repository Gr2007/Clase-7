/*
Leer dos archivos de textos y comparar si son iguales, indicar al usuario si lo son o no.
*/

#include <stdio.h>//para printf, scanf, getchar y se usa en mi biblioteca
#include <stdlib.h>
#include <string.h>
#define p printf
#define s scanf


int main(int argc, char* argv[]){//abro funcin principal
    FILE *archivo1=NULL;
    FILE *archivo2=NULL;
	int res,res2;
	int similitud;
    char caracteres1[100],caracteres2[100];

    p("Este programa lee dos archivos de textos y comparar si son iguales\n");
    if((archivo1=fopen("arch1.txt","r"))==NULL || (archivo2=fopen("arch2.txt","r"))==NULL)
       {
           p("\nError al abrir");
           getchar();
           exit(0);
        }
	else
	{
archivo1 = fopen("arch1.txt", "r");
archivo2 = fopen("arch2.txt", "r");
                fgets(caracteres1,100,archivo1);
                fgets(caracteres2,100,archivo2);
                similitud=strcmp(caracteres1,caracteres2);
if (similitud ==0){
	p("\nLos archivos de texto son iguales");
	}
else
	p("\nLos archivos de texto no son iguales");
}
    return 0;
}
