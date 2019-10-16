#include<stdio.h>
main()
{
	int i,x;
	
	for(i=1; i<=20; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x);
		
		if (x==0)
		{
			printf("Zero \n");
		}
		else 
		{ 
			if (x>0)
			{			
			printf("Numero Positivo \n");
			}
			else
			{
				printf("Numero Negativo \n");
			}
		}
		
		
	}
}
