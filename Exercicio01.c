#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  int i;
  int menoridade=0;
  int idade[10];
  int resultado = 0;
  int cont1 = 0, cont2 = 0;
  float totalidade = 0, cont = 0, media = 0;

  //Escreva um programa que leia a idade de 10 pessoas e armazene-as em um vetor. Calcule e mostre:
  //a) a menor idade
  //b) a média das idades
  //c) a quantidade de pessoas que tem idade entre 20 e 30 anos (inclusive)
  //d) a quantidade de pessoas com idade maior que a média

  for ( i = 0; i < 10; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 01 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite a sua idade:  ");
    scanf("%i", &idade[i] );


    //a) a menor idade
    if ( idade[i]<menoridade || menoridade ==0)
    {
      menoridade = idade[i];
    }

    //b) a média das idades
    totalidade += idade[i];
    cont ++;

    //c) a quantidade de pessoas que tem idade entre 20 e 30 anos (inclusive)
    if (idade[i] >= 20 && idade[i]<= 30)
    {
      cont1 ++;

    }

  }
  media = totalidade / cont;

  for ( i = 0; i < 10; i++)
  {
    /* code */
    if (media < idade[i])
    {
      /* code */
      cont2 ++;
      
    }
      
  }
  printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 01 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("A menor idade: %i\n", menoridade);
  printf("A media das idades: %.2f\n", media);
  printf("A quantidade de pessoas que tem idade entre 20 e 30 anos: %i\n", cont1);
  printf("A quantidade de pessoas com idade maior que a media: %i\n", cont2);
  
   printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}