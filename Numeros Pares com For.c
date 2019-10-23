#include<stdio.h>
main()
{
	int x,y,z,i;
	
	printf("Digite um Valor \n");
	scanf("%d",&x);
	printf("Digite mais um Valor. \n");
	scanf("%d",&y);
	
	if(x>y)
	{
		x=x;
		y=y;
	}
	else
	{
		z=x;
		x=y;
		y=z;
	}
	for(i=y; i<=x; i++)
	{
		if(i%2==0)
		{
			printf("Numero Par : %d \n ", i);
		}
		else
		{
			x=x;
			y=y;
		}
	}
	
}
