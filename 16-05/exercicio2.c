/*
*
* 	CALCULADORA DE VOLUME DE ESFERAS
* 	EDUARDO RODRIGUES 16/05/2022
*
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.c>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<locale.h>
#define pi 3.14

main()
{

	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	float raio, volume;
	
	printf("\n\t o raio da esfera é: ");
	scanf("%f",&raio);
	
	volume = 4 * ( pi * pow(raio,3))  / 3;
	printf("\n\t o volume da esfera de raio %f é %f",raio,volume);
	
	return 0;
	
}
