/*
*Este programa me odia alv
*Realizar un menú (Usar switch-case) que muestre y resuelva las opciones:
*a. Potencia de un número (usar ciclos, NO la función pow) con base y exponente dados por el usuario.
*b. Sumatoria de un número con inicio y fin dados por el usuario.
*c. Coseno de un número.
*d. Salir.
*/

#include <stdio.h>  //para printf, scanf y getchar
#include <stdlib.h> //para exit
#include <math.h> //para coseno

#define p printf
#define s scanf
#define rad 57.2958 //equivalencia de 1 radian en grados

int main (int argc,char* argv []) //Funcion principial
{//abre funcion principal
unsigned char opc,reg; //declaro variable para mis opcionesmensaje de bienvenida

    p("\n\t %c%c===================================================================%c%c",201,205,205,187);//mensaje de bienvenida
    p("\n\t %c                          Bienvendio                                 %c",186,186);//mensaje de bienvenida
    p("\n\t %c%c===================================================================%c%c",200,205,205,188);//mensaje de bienvenida

do{//abro ciclo

int exp,sum=0,inicio,r=0,fin; //declaro variables dentro del ciclo
float x,z,num,pt=1; //declaro variables dentro del ciclo

    p("\n\n\t\t                      Men%c",163);//mensaje
    p("\n\n\ta. Potencia de un n%cmero con base y exponente dados por el usuario.",163); //opcion
    p("\n\tb. Sumatoria de un n%cmero con inicio y fin dados por el usuario. ",163);//opcion
    p("\n\tc. Coseno de un n%cmero. ",163);//opcion
    p("\n\td. Salir.");//opcion
    p("\n\n\t\tEscoga una opci%cn: \t ",162); //opcion
    s(" %c", &opc);//leo opc
    switch (opc)//menu con switch-case
        {//abro menu
        case 'a': case 'A'://Empieza caso
            p("\n\n\n\tPotencia de un n%cmero con base y exponente dados por el usuario.",163);//mensaje
            p("\n\n\tIngrese el n%cmero: ",163);//mensaje
            s("%f", &num);//leo num
            p("\n\n\tIngrese el exponente: ");//mensaje
            s("%d", &exp);//leo exp
                while (r<exp)//uso ciclo while
                {//abro ciclo while para la potencia
                    pt=pt*num;
                    r=r+1;
                }//cierro ciclo
            p("\n\n\tResultado: %f",pt);//imprimo pt
            break; //fin del caso

        case 'b': case 'B'://Empieza caso
            p("\n\n\n\tSumatoria de un n%cmero con inicio y fin dados por el usuario. ",163);//mensaje
            p("\n\n\tIngrese el n%cmero inicial: ",163);//mensaje
            s("%d", &inicio);//leo inicio de la sumatoria
            p("\n\n\tIngrese el n%cmero final: ",163);//mensaje
            s("%d", &fin);//leo fin de la sumatoria
                while (inicio<=fin)//uso ciclo while
                {//abro ciclo
                    sum=sum+inicio;
                    inicio=inicio+1;
                }//cierro ciclo
            p("\n\n\t\tel resultado es %d",sum);//imprimo sum
        break;//cierro ciclo

        case 'c': case'C'://abro caso
            p("\n\n\n\tCoseno de un n%cmero. ",163);//mensaje
            p("\n\n\tIngrese el n%cmero:",163);//mensaje
            s("%f", &x);//leo x
            z=cos(x);//resultado en Radianes
            z=z*(rad);//transformo Radianes a Grados
            p("\n\n\tEl resultado es: %f",z);//imprimo resultado
            break;//cierro caso

        case 'd':case'D'://abro caso para la opcion salir
            exit(0);//hago que salga
            break;

        default://caso default
            p("\n\n\n\tno mms homs :v");//mensaje
            getchar();//atrapo el enter
            getchar();
            exit (0);//salgo
            break;//cierro
        }//cierro menu

        p("\n\t /---  Desea realizar otra operaci%cn (s/n):  ---/\n\t",162);//mensaje
        getchar();//atrapo enter
        s(" %c", &reg);//leo
    }
while(reg=='s'||reg=='S');//menu while

p("\n\t Hasta luego :c (presiona ENTER)");//mensaje en caso de que reg==n

getchar();
getchar();
return (0);

}//cierro funcion principal
