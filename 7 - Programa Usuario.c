#include<stdio.h>
main()
{	int u,s;

	printf("Digite a ID de Usuario \n");
	scanf("%d",&u);
	
	if (u%1234)
	{
		printf("Usuario invalido! \n");
	}
		else
		{
			printf("Digite a senha \n");
			scanf("%d",&s);
		}
		if (s%9999)
		{
			printf("Acesso Negado!! \n");
		}
			else 
			{
				printf("Acesso Permitido!");
			}
	
	
	
	
	
	
	
	
}
