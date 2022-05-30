/*
*
* 	CALCULADORA DE AREA DE TRIANGULOS
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
	float area, p, a, b, c;
	
	printf("\n\t o lado a do triangulo é: ");
	scanf("%f",&a);
	printf("\n\t o lado b do triangulo é: ");
	scanf("%f",&b);
	printf("\n\t o lado c do triangulo é: ");
	scanf("%f",&c);
	
	p = (a+b+c)/2;
	area = sqrt(p *((p-a) * (p-b) * (p-c))) ;
	printf("\n\t a area do triangulo (a = %.f, b = %.f, c = %.f) é %.f",a,b,c,area);
	
	return 0;
	
}
