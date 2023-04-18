#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  int vetorA [5];
  int vetorB [5];
  int vetorC [10];
  int k =0;
  int i;
  int soma = 0;
  int numero = 1;
  int numeroperfeito = 0;
  int qtd = 0;
  

 //3) Faça um programa que preencha dois vetores, A e B com 5 números em cada. 
 //Gere o o vetor C, com os números do vetor A e B. Depois calcule e mostre na 
 //tela a quantidade de números perfeitos. Um número é perfeito quando ele é igual a
 //soma dos seus divisores exceto ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores).

  for ( i = 0; i < 5; i++)
  {
    /* vetorA */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 03 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite os numeros correpondente ao veto A: ");
    scanf("%i", &vetorA[i]);
      
  }
   for ( i = 0; i < 5; i++)
  {
    /* vetorB */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 03 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite os numeros correpondente ao veto B: ");
    scanf("%i", &vetorB[i]);
      
  }
   for ( i = 0; i < 5; i++)
  {
    /* vetorC */
    
    vetorC[k] = vetorA[i];
    k ++;
    vetorC[k] = vetorB[i];
    k ++;
      
  }

  for ( i = 0; i < 10; i++)
  {
    /* code */
    printf("\nVetorC: %i", vetorC[i]);
    printf("\n\n");
     
  }
  for (i = 0; i < 10; i++)
  {
    /* code */
    printf("\nValor Indexe: %i\n", i);
    
    if (vetorC[i] > numero )
    {
      /* code */
      
      for ( numero = 1; numero < vetorC[i]; numero++)
      {
        /* code */
        if (vetorC[i] % numero == 0)
        { 
          soma += numero;  
        }
          
      }
     
      
      if (soma == vetorC[i])
        {
           numeroperfeito = vetorC[i];
           //qtd ++;
           printf("Achou o numero perfeito: %i\n\n", numeroperfeito);
        }
        else
        {
           //printf("\n\nSoma do perfeito: %i\n", soma);
           printf("Esse numero nao e perfeito: %i\n\n", vetorC[i]);
        }
        numero = 0;
        soma = 0;

    }

    
  }

  
  printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");
  
   return 0;
}