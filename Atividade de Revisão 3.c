#include<stdio.h>
main()
{
	int i,id,maior,cont;
	
	i=1;
	maior=0;
	cont=0;
	
	while(i!=0)
	{
		printf("Digite a Sua Idade : \n");
		scanf("%d",&id);
		
		if(id>maior)
		{
			maior=id;
		}
		else
		{
			maior=maior;
		}
		if(id>18 && id<35)
		{
			cont=cont+1;
		}
		else
		{
			cont=cont;
		}
	printf("Deseja Continuar : 1 - Continuar  , 0 - Sair \n ");
	scanf("%d",&i);	
	}	
	printf("A Maior idade : %d \n", maior);
	printf("Existem : %d , idades entre 18 e 35 Anos \n",cont);
}
/*Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário se ele quer continuar ou parar. Quando o usuário digitar 0 o
algoritmo para.*/
