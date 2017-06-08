#include <stdio.h>
#include "funcoesmath.h" 
#include "funcoesmatemati.h"
#include <dlfcn.h>

int main()
{
    
    int modo_seno , modo_arcseno;
    double angulo;
	if(argc==3){
		modo_seno=strcmp(argv[1],"-s");
		modo_arcseno=strcmp(argv[1],"-a");
	   	angulo= atof(argv[2]);
		if(modo_seno==0)
		{
	        void* handle = dlopen("libseno.so", RTLD_LAZY);
            double(*seno)(double,double) = dlsym(handle, "seno");   
			printf("seno(%lf):  %lf\n",angulo,seno(angulo));
			dlclose(handle);
		}
		else if(modo_arcseno==0)
		{
		    void* handle = dlopen("libseno.so", RTLD_LAZY);
            double(*arcseno)(double,double) = dlsym(handle, "arcseno");   
			printf("arcseno(%lf):  %lf\n",angulo,arcseno(angulo));
			dlclose(handle);   
			
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
/*void* handle = dlopen("libseno.so", RTLD_LAZY);
int(*pot)() = dlsym(handle, "pot"); 
void* handle = dlopen("libseno.so", RTLD_LAZY);
    int(*fatorial)() = dlsym(handle, "fatorial");  	
	printf("%d\n",fatorial(10));
	void* handle = dlopen("libseno.so", RTLD_LAZY);
    int(*calcn)() = dlsym(handle, "calcn"); 
    printf("%d\n",calcn(20));
    void* handle = dlopen("libseno.so", RTLD_LAZY);
    int(*pot)() = dlsym(handle, "pot"); 
    printf("%lf\n",seno(60.0));
	*/
