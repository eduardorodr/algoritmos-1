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
	
	float altura,peso,imc;
	
	printf("\n\t Digite sua altura: "); scanf("%f",&altura);
	printf("\n\t Digite seu peso: "); scanf("%f",&peso);
	
	imc = peso/(altura*altura);
	printf("Seu imc eh %.2f",imc);
	
	return 0;
	
}

