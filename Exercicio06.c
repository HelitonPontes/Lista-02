#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  char nome [10][20];
  char cnome [20];
  char pessoamenorpeso [20];
  float peso [10];
  float menorpeso = 0 ;
  int contpeso = 0;
  int i;
  float somapeso = 0;
  float mediapeso = 0;

  //6) Escreva um programa que leia o nome e o peso de 10 pessoas e armazene-as em vetores. Calcule e mostre:
  //a) o menor peso e o nome da pessoa
  //b) a média dos pesos
  //c) Mostre na tela um relatório com o nome e peso das pessoas cujo peso é inferior a média

  for ( i = 0; i < 10; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 06 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite o seu Nome: ");
    scanf("%s", &nome[i]);
    printf("Digite o seu peso: ");
    scanf("%f", &peso[i]);

   //b) a média dos pesos
    contpeso ++;
    somapeso += peso[i];

   //a) o menor peso e o nome da pessoa
    if (peso[i] < menorpeso || menorpeso==0)
    {
      /* code */
      //strcpy(nome, peso[i]);
      menorpeso = peso[i];
      strcpy(pessoamenorpeso, nome[i]);
      
    }
  
  }
  mediapeso = somapeso / contpeso;
  //c) Mostre na tela um relatório com o nome e peso das pessoas cujo peso é inferior a média
  for ( i = 0; i < 10 ; i++)
  {
    if (peso[i] < mediapeso)
    {
      /* code */
       printf("\n\nXXXXXXXXXXXXXXXXX- Listagen Pessoas com o peso inferior a media -XXXXXXXXXXXXXXXXXXXXXX\n");
       printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
       printf("\nNome: %s", nome[i]);
       printf("\nPeso em Kg %.2f\n", peso[i]);
    }
      
    /* code */
    //printf("\n\nXXXXXXXXXXXXXXXXX- Listagen Completa -XXXXXXXXXXXXXXXXXXXXXX\n");
    //printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    //printf("\nNome: %s", nome[i]);
    //printf("\nPeso em Kg %.2f\n", peso[i]);
  }
   printf("\n\n\n\nXXXXXXXXXXXXXXXXX- Exercicio 06 -XXXXXXXXXXXXXXXXXXXXXX\n");
   printf("\nO menor peso e o nome da pessoa: \n");
   printf("A pessoa com o menor peso: ->%s", pessoamenorpeso);
   printf("\nO menor peso: ->%.2f", menorpeso);
   printf("\n\n\nA media dos pesos %.2f\n", mediapeso);

   printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}