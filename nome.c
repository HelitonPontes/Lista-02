#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  char nome [5][20];
  int i;
  int menoridade=0;
  int idade[10];
  int resultado = 0;
  int cont1 = 0, cont2 = 0;
  float totalidade = 0, cont = 0, media = 0;


  for ( i = 0; i < 5; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 04 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite o seu Nome: ");
    scanf("%s", nome[i]);
    printf("O nome: %s\n", nome[i]);
    
  }
  for ( i = 0; i < 5; i++)
  {
     printf("\n\nO nome: %s\n", nome[i]);

  }
  printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 04 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("A menor idade: %i\n", menoridade);
  printf("A media das idades: %.2f\n", media);
  printf("A quantidade de pessoas que tem idade entre 20 e 30 anos: %i\n", cont1);
  printf("A quantidade de pessoas com idade maior que a media: %i\n", cont2);
  
   printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}