#include<stdio.h>
main()
{
	int conti,contp,i,x;
	
	contp=0;
	conti=0;
	for(i=1; i<=6; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x);
		
		if (x%2==0)
		{
			contp=contp+1;
		}
		else
		{
			conti=conti+1;
		}
	}
	printf("Quantidades de Numeros Pares : %d \n",contp);
	printf("Quantidades de Numeros Impares: %d \n", conti);
}
//Elabore um programa que leia 6 números e mostre a quantidade dos pares e dos impares
