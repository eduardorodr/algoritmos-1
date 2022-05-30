/*
*
* 	TROCAR OS VALORES DE DUAS VARIAVEIS ENTRE SI
* 	EDUARDO RODRIGUES 11/05/2022
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main () 
{
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int a,b,aux;
	printf("\n\t Digite o valor da primeira variavel: "); scanf("%d",&a);
	printf("\n\t Digite o valor da segunda variavel: "); scanf("%d",&b);
	
	printf("\n\t a=%d e b=%d",a,b);
	printf("\tPressione qualquer tecla...");
	getch();
	
	aux=b;
	b=a;
	a=aux;
	printf("\n\n\t a=%d e b=%d",a,b);
	
	return 0;
	
}

