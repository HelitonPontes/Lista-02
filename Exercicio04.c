#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  char produto [5][20];
  char cproduto [20];
  int i;
  float valorproduto [5];
  float Valorproduto = 0, maiorproduto = 0;
  int contproduto = 0;
  int maiormedia = 0;
  int cont1 = 0, cont2 = 0;
  float totalproduto = 0, cont = 0;
  float media = 0;

  //4) Faça um programa que preencha um array com os nomes de 5 produtos, e outro array com o valor dos produtos. Calcule e mostre:
  //a. a quantidade de produtos que o valor é abaixo de 10 reais;
  //b. a média dos valores dos produtos;
  //c. a quantidade de produtos que valor acima da média;
  //d. a maior valor e o nome do produto;
  //e. faça uma listagem que imprima na tela (Nome Vlr do produto)

  for ( i = 0; i < 5; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 04 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite o seu Produto: ");
    scanf("%s", &produto[i]);
      
  }

  //outro array com o valor dos produtos
  for ( i = 0; i < 5; i++)
  {
    printf("\n\nXXXXXXXXXXXXXXXXX-:  Valor Produto %i\n", i);
    printf("\n\nDescricao Produto: %s\n", produto[i]);
    printf("\nDigite o valor Produto: R$  ");
    scanf("%f", &valorproduto[i]); 
    Valorproduto = valorproduto[i]; 

    //b. a média dos valores dos produtos;
    cont ++;
    totalproduto += Valorproduto;

     //a. a quantidade de produtos que o valor é abaixo de 10 reais;
    if (valorproduto[i] < 10)
    {
      contproduto ++;
    }
     //d. a maior valor e o nome do produto;
     if (valorproduto[i] > maiorproduto)
     {
      maiorproduto = Valorproduto;
      strcpy(cproduto, produto[i]);
     }

  }
   //A quantidade de produtos que valor acima da média;   
  media = totalproduto / cont;

   for ( i = 0; i < 5; i++)
   {
    if (valorproduto[i] > media)
    {
      maiormedia ++;
    }
  
   }

   //e. faça uma listagem que imprima na tela (Nome Vlr do produto)
   for ( i = 0; i < 5; i++)
   {
    printf("\n\nXXXXXXXXXXXXXXXXX- Listagen -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("\nDescricao Produto: %s", produto[i]);
    printf("\nValor Produto: R$ %f\n", valorproduto[i]);
    
   }
  printf("\n\n\n\nXXXXXXXXXXXXXXXXX- Exercicio 04 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("\nA quantidade de produtos que o valor é abaixo de 10 reais: %i\n", contproduto);
  printf("\nA media dos valores dos produtos %.2f\n", media);
  printf("\nA quantidade de produtos que valor acima da media: %i\n", maiormedia);
  printf("\nA maior valor e o nome do produto ->Produto: %s\n", cproduto);
  printf("\nA maior valor e o nome do produto ->Valor: %.2f\n", maiorproduto);
  
   printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}