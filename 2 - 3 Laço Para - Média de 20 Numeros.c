#include<stdio.h>
main()
{
	int x,y,i;
	y=0;
	for(i=1; i<=20; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x);
		
		y=y+x;
	}
	printf("A Media dos Valores Dgitados : %d \n",y/2);
	
}
//Elabore um programa que leia 20 n�meros e mostre a m�dia dos n�meros
