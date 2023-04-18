#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  char cores [10][20] = {"vermelho", "azul", "preto", "branco", "rosa", "verde", "amarelo", "roxo", "cinza", "laranla"} ;
  char corpesquisada [20];
  char resultado [20];
  int i;
  int naoexiste = 0;
  //char fim [3]={"fim"};
  
  //2) Faça um programa que preencha um vetor com 10 cores diferentes. Depois permita 
  //fazer uma pesquisa se uma determinada cor existe armazenada no vetor, se existir 
  //deve ser impresso na tela a cor e em qual posição (índice) esta cor estarmazenada. 
  //A pesquisa deve ser feita até que seja digitado FIM na cor a ser pesquisada na lista.

    /* code */
  printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 02 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("\nDigite a cor desejada ou fim para finaalizar: ");
  scanf("%s", &corpesquisada);
  strlwr(corpesquisada);
  printf("\nDigite a cor: %s", corpesquisada);
  
  while (strcmp (corpesquisada, "fim" ) != 0)
  {
    /* code */
    for ( i = 0; i < 10; i++)
    {
      /* code */
      
      if (strcmp (corpesquisada, cores[i] ) == 0)
      {
        /* code */
        printf("\n\nEssa cor existe em nosso banco de dados: %s", cores[i]);
        
      } 
      else
      {
        naoexiste ++;

      }
      
    }

    if (naoexiste == 10)
    {
      printf("\n\nEssa cor nao existe em nosso banco de dados: %s", corpesquisada);

    }
    
    naoexiste = 0;
          
    printf("\nDigite a cor desejada ou fim para finaalizar: ");
    scanf("%s", &corpesquisada);
    strlwr(corpesquisada);
    
  }
  
  printf("\n\n\n\nXXXXXXXXXXXXXXXXX- Finalizado Exercicio 02 -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}