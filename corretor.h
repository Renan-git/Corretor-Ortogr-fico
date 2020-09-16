#ifndef  CORRETOR_H
#define  CORRETOR_H

/*280k de palavras no dicionário brasileiro*/
#define QNTBIBLIOTECA 275502

char** ArmazenaBiblioteca();
int VerificaNome(char **Matriz,char *palavra,int inicio,int final);
int ProcuraBinaria(char **matriz,char *palavra,int inicio,int final);



#endif  /*FILE_H*/
