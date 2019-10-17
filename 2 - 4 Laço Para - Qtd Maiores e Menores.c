#include<stdio.h>
main()
{
	int i,cont,contm,x;
	
	cont=0;
	contm=0;
	
	for(i=1; i<=10; i++)
	{
		printf("Digite a Sua Idade : \n");
		scanf("%d",&x);
		
		if (x>=18)
		{
			cont=cont+1;
		}
		else
		{
			contm=contm+1;
		}
	}
	printf("Maiores de Idade : %d \n",cont);
	printf("Menores de Idade : %d \n",contm);
}
//Elabore um programa que leia 10 idades e diga quantas pessoas são menores de idade
