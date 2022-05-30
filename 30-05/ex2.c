/*
*
* 	EXERCICIOS LOOPS DE REPETIÇÃO
* 	EDUARDO RODRIGUES 30/05/2022
*
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

main()
{
	
	int sum; int x,y,i;
	scanf("%d %d",&x,&y);
	
	for(i=x; i<=y; i++){
		if(i%2==0){
			printf("\n %d",i);
			sum+=i;
		}
	}
	
	printf("\n %d",sum);
	
	
	return 0;
	
}
