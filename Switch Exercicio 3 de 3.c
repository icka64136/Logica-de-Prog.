#include<stdio.h>
main()
{
	int x,y;
	printf("Digite um valor \n");
	scanf("%d",&x);
	printf("Digite 1- Dobro, 2- Triplo, 3- Cubo, 4- Sucessor, 5- Antecessor \n");
	scanf("%d",&y);
	
	switch (y){ 
	case 1: printf("Dobro: %d \n" , x+x);break;
	case 2: printf("Triplo: %d \n" , x+x+x);break;
	case 3: printf("Cubo: %d^3:%d \n" ,x, x*x*x);break;
	case 4: printf("Sucessor: %d" , x+1);break;
	case 5: printf("Antecessor: %d" , x-1);break;
	default: printf("Valor Invalido \n");
	}
		
}
