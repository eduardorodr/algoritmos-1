/*
*
* 	CALCULADORA DE DISTANCIA ENTRE PONTOS
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
	
	float xa,ya,xb,yb,dist;
	printf("\n\t coordenada xa: "); scanf("%f",&xa);	
	printf("\n\t coordenada ya: "); scanf("%f",&ya);	
	printf("\n\t coordenada xb: "); scanf("%f",&xb);	
	printf("\n\t coordenada yb: "); scanf("%f",&yb);
	
	dist = sqrt( (pow(xa-xb,2) + pow(ya-yb,2)) );
	printf("\n\t a distancia entre os pontos eh %f",dist);
	
	return 0;
	
}
