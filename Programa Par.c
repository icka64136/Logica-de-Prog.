#include<stdio.h>
main()
{
	int x,y,z;
	printf("Digite o primeiro valor \n");
	scanf("%d",&x);
	printf("Digite o segundo valor \n");
	scanf("%d", &y);
	
	z=x+y;
	if (z%2==0) { printf("o Numero digitado e Par \n"); 
	}
	else { printf("O Numero Digitado e Impar \n");
	}
	
	
}
