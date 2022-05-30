/*
*
* 	CALCULA O TOTAL DE SEGUNDOS DE UM HORARIO INSERIDO
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
	int horas,minutos,segundos,total;
	
	printf("\n\t Horas: "); scanf("%d",&horas);		
	printf("\n\t Minutos: "); scanf("%d",&minutos);
	printf("\n\t Segundos: "); scanf("%d",&segundos);
	
	total=(horas*60*60)+(minutos*60)+segundos;
	printf("\n\t O total de segundos é %d",total);
	
	return 0;
	
}

