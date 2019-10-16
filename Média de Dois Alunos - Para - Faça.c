#include<stdio.h>
main()
{
	float x,y;
	int i;	
	
	for(i=1; i<=10; i++) 
	{		
	printf("Digite a Primeira Nota \n");
	scanf("%f",&x);
	printf("Digite a segunda Nota \n");
	scanf("%f",&y);
	
	printf("Media = %.1f \n ",(x+y)/2);
	}
	
	
	
}
