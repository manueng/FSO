#include <stdio.h>
#include "funcoesmath.h" 
#include "funcoesmatemati.h"
#include <dlfcn.h>

int main()
{
    void* handle = dlopen("libseno.so", RTLD_LAZY);
    int(*pot)(int,int) = dlsym(handle, "pot");
	printf("%d\n ",(*pot)(2,4));
	dlclose(handle);
    /*printf("%d\n",fatorial(10));
	printf("%d\n",calcn(20));
    printf("%lf\n",seno(60.0));*/
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
