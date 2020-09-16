#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"corretor.h"

char** ArmazenaBiblioteca()
{
int i=0;
char **Matriz;
char palavra[50]={'\0'};
FILE *biblioteca;
biblioteca = fopen("/usr/share/dict/brazilian","r");
	Matriz=malloc(QNTBIBLIOTECA*sizeof (char*));
	fscanf(biblioteca,"%s",palavra);
	while (!feof(biblioteca))
	{	
		Matriz[i]=malloc(sizeof (palavra));
		strcpy(Matriz[i],palavra);
//		printf("%s\n",Matriz[i]);
		i++;
		fscanf(biblioteca,"%s",palavra);
	}
fclose(biblioteca);
return Matriz;
}

int VerificaNome(char **Matriz,char *palavra,int inicio,int final)
{
/*se a palavra for um nome*/
	if ((palavra[0]>64) && (palavra[0]<91))
		return 1;
	else
		return 0;		
}

int ProcuraBinaria(char **matriz,char *palavra,int inicio,int final)
{
if ((strcmp(matriz[((inicio+final)/2)],palavra))==0)
	return(1);
if (inicio>final)
	return 0;
	else
		if (strcmp(matriz[(inicio+final)/2],palavra)<0)
				ProcuraBinaria(matriz,palavra,inicio=(((inicio+final)/2)+1),final);
		else
			if (strcmp(matriz[(inicio+final)/2],palavra)>0)
				ProcuraBinaria(matriz,palavra,inicio,final=(((inicio+final)/2)-1));
}

