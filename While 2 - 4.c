#include<stdio.h>
main()
{
	int x,i;
	
	i=1;
	
	while(i<=20)
	{
		printf("Digite um Numero : \n");
		scanf("%d",&x);
		
		if (x%2==0)
		{
			printf("Numero Par \n");
		}
		else
		{
			printf("Numero Impar \n");
		}
	
		i=i+1;
	}
	
	

		

}

//Elabore um algoritmo que leia 20 números e verifique se é par ou impar
