#include <stdio.h>
#include "funcoesmath.h" 
#include "funcoesmatemati.h"
#include <string.h>
#include <stdlib.h>
int main(int argc ,char* argv[])
{
    int modo_seno , modo_arcseno;
    double angulo;
	if(argc==3){
		modo_seno=strcmp(argv[1],"-s");
		modo_arcseno=strcmp(argv[1],"-a");
	   	angulo= atof(argv[2]);
		if(modo_seno==0)
		{
			printf("seno(%lf):  %lf\n",angulo,seno(angulo));
		}
		else if(modo_arcseno==0)
		{
			printf("arcseno(%lf):  %lf\n",angulo,arcseno(angulo));
		}
		else
		{
			printf("modo invalido\n");
		} 
	}
	else
	{
		printf("numero de argumentos invalido\n");
	}	         
	return 0;
}
