#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include "corretor.h"

int main ()
{
int ini=0,fim=275502;
char **bibliotecaArmazenada;
char palavra[50];
bibliotecaArmazenada=ArmazenaBiblioteca();
scanf(" %s",palavra);
	while (!feof(stdin))
	{/*resolve problema de maiusculo e minusculo*/
		if(VerificaNome(bibliotecaArmazenada,palavra,ini,fim))
			fim=4861;
		else
			ini=4862;
		if(ProcuraBinaria(bibliotecaArmazenada,palavra,ini,fim))
			printf("%s ",palavra);
		else
			printf("[%s]",palavra);
		scanf(" %s",palavra);
		ini=0;fim=275502;
	}

for (ini=0;bibliotecaArmazenada[ini]!=NULL;ini++)
	free(bibliotecaArmazenada[ini]);
free(bibliotecaArmazenada);
return 0;
}
