#include<stdio.h>
main()
{
	int x,g,s,r,b,na,i;
	
	i=1;
	g=0;
	s=0;
	r=0;
	b=0;
	na=0;
	while(i<=1500)
	{	
	printf("Digite 1- Globo , 2- SBT, 3- Record , 4- Bandeirantes, 5- Nenhuma das Alternativas \n");
	scanf("%d",&x);
	
		switch(x)
		{
			case 1: g=g+1;break;
			case 2: s=s+1;break;
			case 3: r=r+1;break;
			case 4: b=b+1;break;
			case 5: na=na+1;break;
			default: printf("Numero Invalido \n");break;
		}
	i=i+1;	
	}
	printf("Votos Globo : %d \n ",g);
	printf("Votos SBT : %d \n",s);
	printf("Votos Record : %d \n",r);
	printf("Votos Bandeirantes : %d \n",b);
	printf("Nenhuma das Alternativas : %d \n",na);
}
