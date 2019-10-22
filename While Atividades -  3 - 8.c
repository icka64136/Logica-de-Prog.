#include<stdio.h>
main()
{
	int conti,x,i,contf;
	conti=0;
	contf=0;
	i=1;
	while(i<=10)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x);
		
		if(x>10 && x<20)
		{
			conti=conti+1;
		}
		else
		{
			contf=contf+1;
		}
	i=i+1;	
	}
	printf("Dentro do Intervalo : %d \n",conti);
	printf("Fora do intervalo : %d \n",contf);
	
}
// Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10 e 20]
//  e quantos deles estão fora do intervalo, escrevendo estas informações.
