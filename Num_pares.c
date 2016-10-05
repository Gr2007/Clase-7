#include <stdio.h>//para getchar y printf
#include <math.h>// para fmod
int main (int argc,char* argv []) //Funcion principial
{//abre funcion principal

    int a=0, b=0;
    printf("\n\t %c%c==============================================%c%c",201,205,205,187);
	printf("\n\t %c                    Bienvenido                  %c",186,186);
    printf("\n\t %c                    Soy Skynet                  %c",186,186);
    printf("\n\t %c                  >>moriras c:<<                %c",186,186);
	printf("\n\t %c Este programa te ayudar%c a verificar si tus    %c",186,160,186);
    printf("\n\t %c               n%cmeros son m%cltiplos            %c",186,163,163,186);
    printf("\n\t %c%c==============================================%c%c",200,205,205,188);

    printf("\n\tIntroduce el primer n%cmero: ",163);
    scanf( "%d", &a);//leo numero
    printf("\n\tIntroduce el segundo n%cmero: ",163);
    scanf( "%d", &b);//leo numero
    if (b<a)
    {
    if(fmod(a,b)==0)
        {
        printf("\n\tlos n%cmeros son m%cltiplos",163,163);
        }
    else
        {
        printf("\n\tlos n%cmeros no son m%cltiplos",163,163);
        }
    }
    if (a<b)
    {
    if(fmod(b,a)==0)
        {
        printf("\n\tlos n%cmeros son m%cltiplos",163,163);
        }
    else
        {
        printf("\n\tlos n%cmeros no son m%cltiplos",163,163);
        }
    }
    getchar();
    getchar();
        return 0;
}

/*sigo con flojeruki*/
