#include<stdio.h>
main()
{
	float p,e,m;
	printf("Digite o Peso \n");
	scanf("%f",&p);
	if (p>50)
	{	
	e=(p-50);
	printf("Multa: %.0f%%",m=e*4);
	}
	else
	{
		printf("Multa = %.0f%% \n",m);
		printf("Peso :%0.f%% \n",p);
		printf("Exesso: %0.f%% \n",e);
	}
	
	
	
}
