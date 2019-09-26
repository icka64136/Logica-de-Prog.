#include<stdio.h>

main()
{
int x,y,z,menor;

printf("Digite o primeiro valor. \n");
scanf("%d",&x);
menor=x;

printf("Digite o segundo valor. \n");
scanf("%d",&y);

if (menor>y)
{
		menor=y;
}		
		else
		{
			menor=menor;
		}
printf("Digite o Terceiro valor. \n");
scanf("%d",&z);
if(z<menor)
{
	menor=z;
}
		else
		{
			menor=menor;
		}
			printf("O Menor :%d",menor);
		
}
