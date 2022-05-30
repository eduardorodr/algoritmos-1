/*
*
* 	MEDIA ENTRE 2 VALORES INTEIROS
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
		
	int valor,valor2;
	float media;
	
	printf("\n\t Primeiro valor: "); scanf("%d",&valor);
	printf("\n\t Segundo valor: "); scanf("%d",&valor2);
	
	media = ((float)valor+(float)valor2)/2;
	printf("\n\t A média é %.2f",media);
	
	return 0;
	
}

