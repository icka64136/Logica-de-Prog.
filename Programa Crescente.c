#include<stdio.h>

main()
{
int x,y;

printf("Digite o primeiro valor. \n");
scanf("%d",&x);
printf("Digite o segundo valor. \n");
scanf("%d",&y);

if(x>y)
{
	printf("O menor valor: %d e o Maior : %d\n",y,x);
}
	else
		
		if (x<y) 
{
			printf("O menor valor: %d e o Maior : %d\n",x,y);
}
				else 
			{
					printf("Os valores Digitados sao iguais %d \n",x);
			}
	
		
}
