#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <fcntl.h>
#include "buscador.h"
int cont=0;
void print_30_bytes(char path[256], char word[256],const int  max_input)
{
  if(cont==max_input) return;
  if(!strstr(word,path)) return;
  FILE*  achado=fopen(path,"r");
  char impresso[30];
  fread(impresso,1,30,achado);
  cont++;
  printf("%d,%s",cont,impresso);
}   
   
 
void exploring(char path[], char word[256], const int max_input)
{
	DIR *d;
	struct dirent *dir;
	d = opendir(path);
	
	if(d)
	{
		while((dir = readdir(d)) != NULL)
		{
			char dir_name[256] = "";
			strcat(dir_name, path);
			strcat(dir_name, dir->d_name);
			
			if(!(strcmp(dir->d_name, ".") == 0)) 
			{
				if(!(strcmp(dir->d_name, "..") == 0))
				{
					if(dir->d_type == 4)
					{
						strcat(dir_name, "/");
						exploring(dir_name, word, max_input);
					}
					else
					{
					  print_30_bytes(dir_name,word,max_input);
					          						
					}	
				}	
			}
			
			  
		}
	}
	

}
