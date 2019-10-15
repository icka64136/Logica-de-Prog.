#include<stdio.h>
main()
{
	float x,y;
	int z;
	printf("Digite um valor \n");
	scanf("%f",&x);
	printf("Digite o Segundo Valor \n");
	scanf("%f",&y);	
	printf("Digite : 1- Soma, 2- Subtracao, 3- Mutiplicacao, 4- Divisao. \n");
	scanf("%d",&z); 

		switch (z){
		case 1: printf("Soma : %.0f + %.0f = %.0f \n",x,y,x+y);break;
		case 2: printf("Subtracao : %.0f - %.0f = %.0f \n",x,y,x-y);break;
		case 3: printf("Mutiplicacao : %.0f * %.0f = %.0f \n",x,y,x*y);break;
		case 4: printf("Divisao : %.0f / %.0f = %.1f \n",x,y,x/5);break;
		default: printf("Valor Invalido \n");
	}
		
}
