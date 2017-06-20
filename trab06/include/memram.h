#ifndef MEMRAM_H
#define MEMRAM_H
#define TRUE 1 
#define FALSE 0
	int* ler_referencia(void);
	int quadro_ausente_fifo(int valor_quadro,int* vetor_quadros, int  numero_de_quadros);
	int analise_fifo(int numero_de_quadros , int *referencias);
	int analise_fifo_m(int numero_de_quadros , int *referencias);
	int quadro_ausente_fifo_m(int valor_quadro,int* vetor_quadros, int  numero_de_quadros, int vetor_alloc[]);
	int quadro_ausente_lru(int valor_quadro,int* vetor_quadros, int  numero_de_quadros,int* vetor_alloc);
	int calc_posicao_fifo_m(int* vetor_alloc, int numero_de_quadros);
	int calc_posicao_lru(int* vetor_alloc,int numero_de_quadros);
	
#endif         
