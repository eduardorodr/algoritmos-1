/*
*
* 	CALCULO DO QUADRADO DE UM NUMERO
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
	
	int n;
	printf("\n\t Insira um valor: "); scanf("%d",&n);
	printf("\n\t O numero digitado foi %d, e seu quadrado eh %d",n,n*n);
	
	return 0;
	
}

