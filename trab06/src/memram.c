#include<stdio.h>
#include <stdlib.h>
#include"memram.h"
int* ler_referencia(void)
{
	int* referencias=malloc(sizeof(int));
	int valor;
	int indice;
	indice=0;
	valor=1;
	while(valor>0)
	{
		scanf("%d",&valor);
		referencias= realloc(referencias,sizeof(int)*(indice+1));
		referencias[indice]=valor;
		indice=indice+1;
	}
	return referencias;	
}	


 int analise_fifo(int numero_de_quadros , int *referencias)
 {
 	int vetor_quadros[numero_de_quadros];
 	int cont;
 	int first_in=0;
 	int page_fault;
 	int qtd_page_fault=0;
 	for(cont=0;cont<numero_de_quadros;cont++)
 	{
 		vetor_quadros[cont]=referencias[cont];
 	}
 	while(referencias[cont]>0)
 	{
 		page_fault=quadro_ausente(referencias[cont],vetor_quadros, numero_de_quadros);	
 		if(page_fault){
 			qtd_page_fault++;
 			vetor_quadros[first_in]=referencias[cont];
 			first_in=(first_in+1)%numero_de_quadros;
 		}
 	 	cont++;
    }
    
    return qtd_page_fault;
 }
 
int quadro_ausente(int valor_quadro,int* vetor_quadros, int  numero_de_quadros)
{
	int cont=0;
	for(cont=0;cont<numero_de_quadros;cont++)
	{
		if(vetor_quadros[cont]==valor_quadro)
			return FALSE;
	}
	return TRUE;		
}	    		
 		
 		
 		 
 		  
        
        
