#include<stdio.h>
main()
{
	int i;
	i=100;
	while(i<200)
	{
		if(i%2==1)
		{
			printf("Impar : %d \n\n",i);
		}
		else
		{
			i=i;
		}
		i=i+1;
	}
}
//Escrever um algoritmo que escreve os números ímpares entre 100 e 200.
