#include<stdio.h>
#include"funcoesmath.h"
#include "funcoesmatemati.h"
#define  ns 5
#define narcs 5
  double funcaoseno(int n){
   int is;
   double result=0;
    for(is=0;is<ns;is++)
       result=result+(pot(-1,is)/fatorial(calcn(n))*pot(n,calcn(n));
    return result;
  }
   double funcaoarcseno(double n){
     int iarcs;
     double result=0;
     double narcspot;
     for(iarcs=0;iarcs<narcs;iarcs++){
         narcspot= pot(4,narcs);
       result= result+(fatorial(2*n)/(narcspot*pot(fatorial(n),2)*calcn))*pot(n,calcn(n));
     };
     return result;
   }       
    
       
