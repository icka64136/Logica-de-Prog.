#include<stdio.h>
main()
{
	int s,ig,soma,conth,contm,cont,i,somah;
	float a,am;
	
	am=0;
	somah=0;
	contm=0;
	conth=0;
	soma=0;
	cont=0;
	
	for(i=1; i<=5; i++)
	{	
		printf("Digite a Sua idade : \n");
		scanf("%d",&ig);
		
		soma=soma+ig;
		cont=cont+1;
		
		printf("Digite a sua Altura : \n");
		scanf("%f",&a);
		
		printf("Digite : 0 - Feminino , 1 - Masculino \n");
		scanf("%d",&s);
		
		if(s==0)
		{
			am=am+a;
			contm=contm+1;
		}
		else
		{
			somah=somah+ig;
			conth=conth+1;
		}
	}
		printf("Media idade do Grupo : %d \n", soma/cont);
		printf("Media Altura das Mulheres : %.1f \n", am/contm);
		printf("Media Idade dos Homens : %d \n", somah/conth);
		
	
}

/*Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados:
sexo (0feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas
e mostre as seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;*/
