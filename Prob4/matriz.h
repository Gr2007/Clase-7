#ifndef _matriz_H_
#define _matriz_H_


void leer_matriz(float matriz[3][3], int r, int c){//primer funcion
	int i,j;//declaro mis auxiliares contadores
    printf("\n\tIngresa las entradas de la Matriz \n\n");//indico que hare
  for(i=0;i<r;i++){//abro ciclo que recorre renglones
	for(j=0;j<c;j++){//abro ciclo que recorre columnas
	  printf("\tDa un valor para la coordenada [%d][%d]:  ",i+1,j+1);//solicito valores
	  scanf("%f",&matriz[i][j]);//guardo valores
	 }//cierro mi segundo for
	}//cierro mi primer for
}//fin primer funcion

void imprimir_matriz(float matriz[3][3], int r, int c){//segunda funcion
int i,j;//declaro mis auxiliares contadores
  for(i=0;i<r;i++){//abro ciclo que recorre renglones
	for(j=0;j<c;j++){//abro ciclo que recorre columnas
		  printf("\t\t    %g",matriz[i][j]);//imprimo matriz
	 }//cierro segundo for
	  printf("\t\t\t\n");//espacio para impresion
   }//cierro segundo for
}//fin segunda funcion

float sumar_elementos(float matriz[3][3], int r, int c){//tercera funcion
	int i,j;//declaro mis auxiliares contadores
	float suma=0;//declaro suma e incializo en 0 por que la usare dentro del ciclo
for(i=0;i<r;i++){//abro ciclo que recorre renglones
		for(j=0;j<c;j++)//abro ciclo que recorre columnas, no necesita llaves por que solo hara una linea
			suma=suma+matriz[i][j];//realizo la operacion
    }//cierro segundo for
    return suma;//regreso suma
}//fin tercera funcion


void cambia_diagonal(float matriz[3][3], int r, float numero){//cuarta funcion
	int i;//declaro mi auxiliar contador
	for(i=0;i<r;i++)//abro ciclo for para recorrer matriz, no necesita llaves por que es solo una linea
    matriz[i][i]=numero;//realizo operacion
}//fin cuarta funcion

void saludo(void){//Función saludo
int conde;//declaro mi auxiliar contador
	printf("\n\t\t %c",201);//Imprimo el extremo superior izquierdo
	for(conde=0;conde<48;conde++)//Abro ciclo para imprimir
	printf("%c",205);//Imprimo codigo ASCII para el marco
	printf("%c",187);//imprimo Extremo superior derecho
	printf("\n\t\t %c                  Bienvenido                    %c",186,186);//mensaje
   	printf("\n\t\t %c",200);//Imprimo el extremo inferior izquierdo
	for(conde=0;conde<48;conde++)//Abro ciclo para imprimir
	printf("%c",205);//Imprimo codigo ASCII para el marco
	printf("%c",188);//imprimo extremo inferior derecho
}//cierro Función saludo


void separador_(void){
int conde;
for(conde=0;conde<76;conde++)//Abro ciclo para imprimir
	printf("%c",176);//Imprimo codigo ASCII para el marco
}

void saludo_(void){//Función saludo
int conde;//declaro mi auxiliar contador
	printf("\n\t\t %c",201);//Imprimo el extremo superior izquierdo
	for(conde=0;conde<48;conde++)//Abro ciclo para imprimir
	printf("%c",205);//Imprimo codigo ASCII para el marco
	printf("%c",187);//imprimo Extremo superior derecho
	printf("\n\t\t %c       Programa hecho por Iridian y Johan       %c",186,186);//mensaje
   	printf("\n\t\t %c",200);//Imprimo el extremo inferior izquierdo
	for(conde=0;conde<48;conde++)//Abro ciclo para imprimir
	printf("%c",205);//Imprimo codigo ASCII para el marco
	printf("%c",188);//imprimo extremo inferior derecho
}//cierro Función saludo

#endif


