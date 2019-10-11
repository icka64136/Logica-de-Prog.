#include<stdio.h>
main()
{
	float m,x,y;
	int z;
	printf("Digite a Primeira Nota \n");
	scanf("%f",&x);
	printf("Digite a Segunda Nota \n");
	scanf("%f",&y);
	
	m=(x+y)/2;
	
	printf("Digite : 1- Sistema de Infor. , 2- Administracao, 3- Fisioterapia, 4- Direito \n");
	scanf("%d",&z);
	
	switch(z) {
		case 1: 
			if (m>=7) {
			printf("Aprovado :%.1f \n",m);break;
		} else {
			printf("Reprovado :%.1f \n",m);break;
		}
			case 2: 
			if (m>=5) {
			printf("Aprovado :%.1f \n",m);break;
		} else {
			printf("Reprovado :%.1f \n",m);break;
		}
			case 3: 
			if (m>=8) {
			printf("Aprovado :%.1f \n",m);break;
		} else {
			printf("Reprovado :%.1f \n",m);break;
		}
			case 4: 
			if (m>=9) {
			printf("Aprovado :%.1f \n",m);break;
		} else {
			printf("Reprovado :%.1f \n",m);break;
		}
	default: printf("Numero Invalido \n");break;
	
	}
	
	
	
	
}
