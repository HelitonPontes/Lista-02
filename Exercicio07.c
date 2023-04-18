#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int numero[10];
  int i, z;
  float multi3 = 0;
  int cont3 = 0;
  float media3= 0;
  int cont10 = 0;
  int contp = 0;
  int primo = 0;
  int totalprimo = 0;
 
 //7) Faça um programa que receba dez números inteiros e armazene em um vetor. Calcule e mostre:
 //• A soma dos números primos
 //• A média dos números múltiplos de 3
 //• A quantidade de números ímpares e maiores que 10

  for (i = 0; i < 10; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 07 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("\nDigite o numero desejado: ");
    scanf("%i", &numero[i]);
  }
    
  for (i = 0; i < 10; i++)
  {
    //• A média dos números múltiplos de 3
    if (numero[i] % 3 == 0 )
    {
      multi3 += numero[i];
      cont3 ++;
    }
     //• A quantidade de números ímpares e maiores que 10
     if (numero[i] % 2 == 1 && numero[i] > 10)
     {
      cont10 ++;
      
     }  
     for ( z = 1; z <= numero[i]; z++)
     {
      /* code */
      if (numero[i] % z == 0)
      {
        contp ++; 
        
      }
     }
        if(contp == 2)
      {
        totalprimo ++;
        primo = numero[i];
        printf("\nNumero primo: %i", primo);
      }
     contp = 0;
     z = 1;
  }
  media3 = multi3 / cont3;

  printf("\n\n\n\nXXXXXXXXXXXXXXXXX- Exercicio 07 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("\nA media dos numeros multiplos de 3: %.2f", media3);
  printf("\nA quantidade de numeros impares e maiores que 10:  %i", cont10);
  printf("\nA soma dos numeros primos %i",totalprimo);
  
  printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");

  return 0;
}