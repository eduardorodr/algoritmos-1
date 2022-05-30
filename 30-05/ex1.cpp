/*
*
* 	EXERCICIOS LOOPS DE REPETIÇÃO
* 	EDUARDO RODRIGUES 30/05/2022
*
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int sum;
	for(int i=0; i<=100; i++){
		sum+=i;
	}
	
	printf("%d",sum);
	
	return 0;
	
}
