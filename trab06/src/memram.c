#include<stdio.h>
#include"memram.h"
void alloca(char  quantram,char*  argv[], int quantalloc)
{
  int cont;
  int quantrami=(int)quantram;
  int paginavet[quantrami][1];
  for(cont=1; cont<quantrami; cont++)
  {
    paginavet[cont][1]=(int)argv[cont+2][1];
    printf("%d",paginavet[cont][1]);
  }    
}  
   
        
        
