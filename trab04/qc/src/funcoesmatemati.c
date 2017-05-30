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
   double arcseno(double n){
     int iarcs;
     double result=0;
     double narcspot;
     double denominador;
     double numerador;
     for(iarcs=0;iarcs<narcs;iarcs++){
       narcspot= pot(4,narcs);
       denominador=fatorial(2*n);
       numerador=(narcspot*pot(fatorial(n),2)*calcn(n))*pot(n,calcn(n));
       result= result+(denominador/numerador);
     }
     return result;
   }       
    
       
