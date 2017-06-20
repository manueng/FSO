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
 	        page_fault=quadro_ausente_fifo(referencias[cont],vetor_quadros, numero_de_quadros);	
 		if(page_fault)
 		{   
 		  vetor_quadros[cont]=referencias[cont];
 		}  
 	}
 	while(referencias[cont]>0)
 	{
 		page_fault=quadro_ausente_fifo(referencias[cont],vetor_quadros, numero_de_quadros);	
 		if(page_fault)
 		{
 			qtd_page_fault++;
 			vetor_quadros[first_in]=referencias[cont];
 			first_in=(first_in+1)%numero_de_quadros;
 		}
 	 	cont++;
    }
    
    return qtd_page_fault;
 }
 int quadro_ausente_fifo(int valor_quadro,int* vetor_quadros, int  numero_de_quadros)
 {
	int cont=0;
	for(cont=0;cont<numero_de_quadros;cont++)
	{
		if(vetor_quadros[cont]==valor_quadro)
			return FALSE;
	}
	return TRUE;		
 }	    		
 
 int analise_fifo_m(int numero_de_quadros , int *referencias)
 {
 	int vetor_quadros[numero_de_quadros],vetor_alloc[numero_de_quadros];
 	int cont,cont_alloc;
 	int page_fault;
 	int qtd_page_fault=0;
 	for(cont=0;cont<numero_de_quadros;cont++)
 	{
 	        page_fault=quadro_ausente_fifo_m(referencias[cont],vetor_quadros, numero_de_quadros, vetor_alloc);	
 		if(page_fault)
 		{   
 		  vetor_quadros[cont]=referencias[cont];
 		}  
 	}
 	while(referencias[cont]>0)
 	{
 		page_fault=quadro_ausente_fifo_m(referencias[cont],vetor_quadros, numero_de_quadros, vetor_alloc);	
 		if(page_fault)
 		{
 			qtd_page_fault++;
 			cont_alloc=calc_posicao_fifo_m(vetor_alloc,numero_de_quadros);
 			vetor_quadros[cont_alloc]=referencias[cont];                
 		};
 	 	cont++;
 	}
    
    
    return qtd_page_fault;
 }
 int quadro_ausente_fifo_m(int valor_quadro,int* vetor_quadros, int  numero_de_quadros,int* vetor_alloc)
 {
	int cont=0;
	for(cont=0;cont<numero_de_quadros;cont++)
	{
		if(vetor_quadros[cont]==valor_quadro)
		{
		        vetor_alloc[cont]=1;
			return FALSE;
		}else
		 {
		        vetor_alloc[cont]=0; 
		 } 	
	}
	return TRUE;		
 }	    		
 
 int calc_posicao_fifo_m(int* vetor_alloc, int numero_de_quadros){
        int cont_alloc=0;
        while(vetor_alloc[cont_alloc]==1)
 	{
 	                vetor_alloc[cont_alloc]=0; 
                        cont_alloc=cont_alloc+1;
 			if(cont_alloc>numero_de_quadros)
 			{
 			        cont_alloc=0;
 			        break;
 			        
 			}
 			cont_alloc=cont_alloc+1;      
 	}		 
 	return cont_alloc;
 }
 int analise_lru(int numero_de_quadros , int *referencias)
 {
 	int vetor_quadros[numero_de_quadros],vetor_alloc[numero_de_quadros];
 	int cont,cont_alloc;
 	int page_fault;
 	int qtd_page_fault=0;
 	for(cont=0;cont<numero_de_quadros;cont++)
 	{
 	        page_fault=quadro_ausente_lru
 	        (referencias[cont],vetor_quadros, numero_de_quadros, vetor_alloc);	
 		if(page_fault)
 		{   
 		  vetor_quadros[cont]=referencias[cont];
 		}  
 	}
 	while(referencias[cont]>0)
 	{
 		page_fault=quadro_ausente_lru(referencias[cont],vetor_quadros, numero_de_quadros, vetor_alloc);	
 		if(page_fault)
 		{
 			qtd_page_fault++;
 			cont_alloc= calc_posicao_lru(vetor_alloc, numero_de_quadros);
 			vetor_quadros[cont_alloc]=referencias[cont];
 		}
 	 	cont++;
    }
    
    return qtd_page_fault;
 }
 int quadro_ausente_lru(int valor_quadro,int* vetor_quadros, int  numero_de_quadros,int* vetor_alloc)
 {
	int cont=0;
	for(cont=0;cont<numero_de_quadros;cont++)
	{
		if(vetor_quadros[cont]==valor_quadro)
		{
		        vetor_alloc[cont]=vetor_alloc[cont]+1;
			return FALSE;
		}
	}
	return TRUE;		
 }
 int calc_posicao_lru(int* vetor_alloc,int numero_de_quadros){
        int cont_alloc,cont_result;
        cont_result=0;
        for( cont_alloc=0;cont_alloc<numero_de_quadros;cont_alloc++)
        {
                if(vetor_alloc[cont_result]<vetor_alloc[cont_alloc])
                   cont_result=cont_alloc;
        }
        return cont_result;                     
 }
 
 
 	    		
 
 		
 		
 		 
 		  
        
        
