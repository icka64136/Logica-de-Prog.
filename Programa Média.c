#include<stdio.h>
main()
{ float m,x,y,z;
	printf("Digite a Primeira Nota \n");
	scanf("%f",&x);
	
	printf("Digite a segunda nota \n");
	scanf("%f",&y);
	
	printf("Digite a terceira nota \n");
	scanf("%f",&z);
	
	m=(x+y+z)/3;
	
	if (m>=7)
	{	
	printf(" Aluno Aprovado :%.1f \n",m);
	}
	else 
	{
	printf("Aluno reprovado :%.1f \n ",m); 
	}
	
	






	
	
}
