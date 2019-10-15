#include<stdio.h>
main()
{
	int y;
	float x; 
	
	printf("Digite o Valor da Compra \n");
	scanf("%f",&x);
	printf("Digite: 1- 5x Sem Juros ,2- 10x Sem Juros ,3- 12x Sem Juros ,4- 24x Sem Juros \n");
	scanf("%d",&y);
		
	switch (y){
		case 1: printf("5 Parcelas : %.2f R$ \n " ,x/5);break;		
		case 2: printf("10 Parcelas : %.2f R$ \n " ,x/10);break;
		case 3: printf("12 Parcelas : %.2f R$ \n " ,x/12);break;
		case 4: printf("24 Parcelas : %.2f R$\n " ,x/24);break;
		default: printf(" Parcela Invalida \n");
	}
}
