#include <stdio.h>
#include "funcoesmath.h"

  int  fatorial(int numero)
  {
	if(numero>0)
		return numero*fatorial(numero-1); 
 	return 1;
  }
 
  double pot(double numero, int potencia)
	{	
		 int i;
	     double result=1;
	     for(i=1;i<=potencia;i++)
         	result=result*numero;
		 return result;	
	}    

  int  calcn(int n){
      return (2*n)+1;
 }
