#include<stdio.h>
main()
{
	int x,i;
	float contm,contf,am,af,sam,mat,mmat;
	
	i=1;
	contf=0;
	contm=0;
	am=0;
	af=0;
	mmat=0;
	mat=0;
	sam=0;
	while(x<=50)
	{
		printf("Digite 1 - Masculino, 2 - Feminino \n");
		scanf("%d",&x);
		if (x=1)
		{			
			printf("Digite a sua Altura : \n");
			scanf("%f",&am);
			
			mat=mat+1;
			contm=contm+1;
			
		}
		else
		{
			printf("Digite a sua Altura : \n");
			scanf("%f",&af);
			contf=contf+1;
		}
		if(af)
		{
			mat=am;
		}
		else
		{
			
		}
		
	}
}
/* Escrever um algoritmo que leia um conjunto de 50 informa��es contendo, cada uma delas, a altura e o sexo
de uma pessoa (c�digo=1, masculino c�digo=2, feminino), calcule e mostre o seguinte:
a) a maior altura da turma
b) a m�dia da altura dos homens
c) a m�dia da altura da turma.*/
