#include<stdio.h>
main()
{
	int x,y,z;
	
	
	printf("Digite 1- Area do Quadrado, 2- Area do Triangulo, 3- Area do Retangulo, 4- Para o Cubo do Valor \n");
	scanf("%d",&x);
	
	switch(x){
		case 1: printf("Digite o Valor de Um Lado \n");
			scanf("%d",&y);
			printf("Area do Quadrado : %d *4 = %d \n ",y,y*4);break;
			
		case 2: printf("Digite a Base e Altura \n");
			scanf("%d""%d",&y,&z);
			printf("Area do Triangulo : %d * %d = %d",y,z,y*z);break;
		
		case 3: printf("Digite a Base e Altura \n");
			scanf("%d""%d",&y,&z);
			printf("Area do Retangulo : (%d * %d)/2 = %d \n ",y,z,y*z/2);break;
		
		case 4: printf("Digite um Valor \n");
			scanf("%d",&y);
			printf("O Cubo do valor e: %d ^ %d ^ %d = %d \n",y,y,y,y*y*y);break;
		
		default: printf("Digito Invalido \n");				
	}
}
//Cubo é o Valor por ele mesmo 3x
//Quadrado é o Valor *4
//Triangulo é a Base* Altura
//Retangulo é (Base * Altura)/2
