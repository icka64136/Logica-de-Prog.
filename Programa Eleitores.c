#include<stdio.h>
main()
{ 
float e,n,b,v;

//printf("Digite o valor de Eleitores.\n"); <<<<<< Poderia ser Assim 
//scanf("%f",&e);

printf("Digite a quantidade de votos brancos.\n");
scanf("%f",&b);
printf("Digite a quantidade de votos nulos.\n");
scanf("%f",&n);
printf("Digite a quantidade de votos validos.\n");
scanf("%f",&v);
	e=(b+n+v);
	b=(100*(b/e));
	n=(100*(n/e));
	v=(100*(v/e));
	
	printf("A quantidade de votos validos: %.1f%% \n",v);
	printf("A quantidade de votos Nulos: %.1f%% \n",n);
	printf("A quantidade de votos brancos: %.1f%% \n",b);
	
}
