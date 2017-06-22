#include <stdio.h>
#include <stdlib.h>
#include "buscador.h"

int main(int argc , char* argv[])
{
	if(argc!=4)
	{
		printf("numero de prametros invalido\n");
	}
	else
	{
		const int max_words = atoi(argv[3]);
		exploring(argv[1], argv[2], max_words);
	}
	return 0;
}
