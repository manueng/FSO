#include<stdio.h>
#include "memram.h"

int main(int argc, char* argv[])
{
	int numero_de_quadros;
	int* referencias; 
	int indice=0;
	int fifo;
	printf("digite a quantidade de quadros na memoria\n");
	scanf("%d",&numero_de_quadros);
	referencias=ler_referencia();
	while(referencias[indice]>0)
	{
		printf("Indice: %d\t Valor: %d\n" ,indice,referencias[indice]);
		indice=indice+1;
	}
	 fifo=analise_fifo(numero_de_quadros,referencias);
	 printf("FIFO %d\n", fifo);
	return 0;	
}                                
      


 
 
