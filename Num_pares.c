/*Programa que lee dos numeros y verificar si el primero es multiplo del segundo
imprimiendo mensaje al usuario con los números y si lo es o no*/

#include <stdio.h>//para getchar y printf
#include <math.h>// para fmod
int main (int argc,char* argv []) //Funcion principial
{//abre funcion principal

    int a=0, b=0;//declaro variables
    printf("\n\t %c%c==============================================%c%c",201,205,205,187);//mensaje inicial
	printf("\n\t %c                    Bienvenido                  %c",186,186);//mensaje inicial
    printf("\n\t %c                    Soy Skynet                  %c",186,186);//mensaje inicial
    printf("\n\t %c                  >>moriras c:<<                %c",186,186);//mensaje inicial
	printf("\n\t %c Este programa te ayudar%c a verificar si tus    %c",186,160,186);//mensaje inicial
    printf("\n\t %c               n%cmeros son m%cltiplos            %c",186,163,163,186);//mensaje inicial
    printf("\n\t %c%c==============================================%c%c",200,205,205,188);//mensaje inicial

    printf("\n\tIntroduce el primer n%cmero: ",163);//solicito el primer numero
    scanf( "%d", &a);//leo numero
    printf("\n\tIntroduce el segundo n%cmero: ",163);// solicito el segundo numero
    scanf( "%d", &b);//leo numero

    if (b<a)//abro una condicional para fmod
    {//abro if
    if(fmod(a,b)==0)//aplico fmod para saber si mis numeros son multiplos
        {//abro if
        printf("\n\tlos n%cmeros son m%cltiplos",163,163);//Imprimo el resultado
        }//cierro if
    else//caso contrario
        {//abro else
        printf("\n\tlos n%cmeros no son m%cltiplos",163,163);//Imprimo el resultado
        }//cierro else
    }//cierro if

    if (a<b)
    {//abro if
    if(fmod(b,a)==0)//aplico fmod para saber si mis numeros son multiplos
        {//abro if
        printf("\n\tlos n%cmeros son m%cltiplos",163,163);//Imprimo el resultado
        }//cierro if
    else//caso contrario
        {//abro else
        printf("\n\tlos n%cmeros no son m%cltiplos",163,163);//Imprimo el resultado
        }//cierro else
    }//cierro if

    if (a=b)
    {//abro if
        printf("\n\tlos n%cmeros son m%cltiplos",163,163);//Imprimo el resultado
    }//cierro if

    getchar();//atrapo el enter
    getchar();//dejo en pausa la pantalla
    return 0; //termino la ejecucion
}//cierro funcion principal

/*sigo con flojeruki*/
