#include<stdio.h>
#include"funcoesmath.h"
#include "funcoesmatemati.h"
#define  ns 10
#define narcs 5
  double seno(int x){
   int n;
   int numerador,denominador,term;
   double result=0;
   for(n=0;n<ns;n++)
   {
      numerador=pot(-1,n);
      denominador=fatorial(calcn(n));
      term=pot(x,calcn(n));
      
      result+=((double)numerador/(double)denominador)*(double)term;      
   }   
   return result;
  }
double  arcseno( double x)
 {
	int narcs=5;
	double x= 0.866 ;
	double Numerador ;
	int Denominador ;
	double result=0;
	for ( int i =0; i<=narcs; i++)
	{
	Numerador = 2*fatorial(i)* pot (x, calc(i)) ;
	printf("%f", Numerador);
    Denominador= pot(fatorial(i),2)* pot(2,2*i)*calc(i);
    result =   result+( Numerador/(double) Denominador);
	}
	return result;
}   
       
