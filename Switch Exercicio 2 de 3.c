#include<stdio.h>
main()
{
	int x;
	
	printf("Digite um Valor entre 1- Cao, 2- Gato, 3- Peixe, 4- Mesa, 5- Janela, 6- Passaro \n");
	scanf("%d",&x);
	
	switch(x){
		case 1: printf ("Dog \n");break;
		case 2: printf ("Cat \n");break;
		case 3: printf ("Fish \n");break;
		case 4: printf ("Table \n");break;
		case 5: printf ("Window \n");break;
		case 6: printf ("Bird \n");break;
		default : printf("Numero Invalido");
	}	
}
