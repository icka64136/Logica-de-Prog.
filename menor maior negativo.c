#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("Digite um Valor. \n ");	
	scanf("%d",&x);
			
	printf("Digite mais um Valor. \n");	
	scanf("%d",&y);
	
	if( x > y) {
		x = x;
		y = y;
	} else {
		z=x;
		x=y;
		y=z;			
	}	
		
	if (x == y) { //Par
		printf("O Quadrado dos valores sao : %d^2 = %d \n ", x,x*y);
	} else { //Impar
		printf("O Cubo dos valores sao : %d ^ 3 = %d , %d ^ 3 = %d \n ", x,x*x*x, y,y*y*y);
		
		if ( x%2==0 ) {
			printf(" Maior : %d Par \n",x);
		} else {
			// O maior é impar
			x = x;			
		}
		
		if (y<0) {
			 	printf("Menor : %d Negativo",y);
		} else {
			// O menor é positivo 
			y = y;
		}
		
		
	}
	
		
	
}
/* Elabore um algoritmo em C que leia 2 valores
	 inteiros e mostre o quadrado dos números 
	se forem iguais e o cubo se forem diferentes. Se forem diferentes diga
	 se o maior é par e se o menor é negativo.*/
