#include<stdio.h>
main()
{
	int cont,x,i;
	
	cont=0;
	
	for(i=1; i<=20; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x);
		
		if(x>50)
		{
			cont=cont+1;
		}
		else
		{
			cont=cont;
		}
	}
	printf("Sao Maiores Que 50 : %d Numeros ",cont);
}

//Elabore um programa que leia 20 números e diga quantos são maiores que 50
