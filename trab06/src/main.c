#include<stdio.h>
#include "memram.h"

int main(int argc, char* argv[])
{
        if(argc<4)
        {
                printf(" o numero de argumentos invalido");
        }
        else
        {
               printf("numero de argumentos valido");
               alloca( argv[2][1], argv, argc);
        }                
        return 0;
}                                
      


 
 
