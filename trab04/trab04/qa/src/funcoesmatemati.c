#include<stdio.h>
#include"funcoesmath.h"
#include "funcoesmatemati.h"
#define  ns 10
#define narcs 5
  double seno(double x){
   int n;
   int numerador,denominador;
   double term;
   double result=0;
   for(n=0;n<ns;n++)
   {
      numerador=pot(-1,n);
      denominador=fatorial(calcn(n));
      term=pot(x,calcn(n));
      
      result+=((double)numerador/(double)denominador)*term;      
   }   
   return result;
  }
   double arcseno(double n){
     int iarcs;
     double result=0;
     double Denominador;
     double Numerador;
     int calcins;
     	for ( iarcs =0; iarcs<=narcs; iarcs++)
	{
	Numerador = 2*fatorial(iarcs)* pot (n, calcn(iarcs)) ;
	printf("%f", Numerador);
	calcins=2*iarcs;
    Denominador= pot((double)fatorial(iarcs),2)* pot(2,calcins)*calcn(iarcs);
    result =   result+( Numerador/(double) Denominador);
	}
	return result;
	
}      
     
       
