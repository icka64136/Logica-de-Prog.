#include<stdio.h>
main()
{
	float i,soma,cont;
	i=13;
	cont=0;
	soma=0;
	while(i<=73)
	{
		soma=soma+i;
		cont=cont+1;
		
		i=i+1;
		
	}
	printf("Media Aritmetica entre 13 e 73 e : %0.f \n",soma/cont);
}
//Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73.
