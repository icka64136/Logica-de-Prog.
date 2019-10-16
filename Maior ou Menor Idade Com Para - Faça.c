#include<stdio.h>
main()
{
	int x,i;
	
	for(i=1; i<=75; i++)
	{	
		printf("Digite a Sua Idade \n");
		scanf("%d",&x);
	
			if (x>=18)
			{
				printf("Maior Idade : %d Anos \n",x);
			}
			else
			{
				printf("Menor Idade : %d Anos \n",x);
			}
	
	}
	
}
