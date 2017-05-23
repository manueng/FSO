# include <stdio>
# include "funcoesmath.h"

  int  fatorial(int numero)
  {
	if(numero>0)
		return numero*fatorial(numero-1); 
 	return 1;
  }
 
 
