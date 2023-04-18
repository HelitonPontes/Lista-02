#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  char vendedor[5][20];
  char cvendedor [20];
  char cproduto[20];
  int i;
  float totalvendasvendedor[5];
  float totalvendasmaior = 0;
  float totalvendatodosvendendor = 0;
  float totalbruto = 0;
  float porcentagem = 0.10;
  float comissao = 0;
  float mediavenda = 0;
  int contvendas = 0;
  int contmaiormedia = 0;
  float totalproduto = 0, cont = 0;

  // 5) Escreva um programa que preencha um vetor com os nomes de 5 vendedores, preencha também outro vetor com valor total das vendas de cada vendedor. Cada vendedor recebe 10% de comissão sobre as vendas. Faça os seguintes cálculos e mostre os resultados na tela:
  // a. Uma listagem com o nome e o valor a receber de cada vendedor (total das vendas * 0.10)
  // b. O total (bruto) vendido pelos 5 vendedores
  // c. A média do total de vendas (valor bruto vendido por cada vendedor)
  // d. A quantidade de vendedores que venderam acima da média das vendas
  // e. O maior valor de comissão e o nome do vendedor que recebeu

  for (i = 0; i < 5; i++)
  {
    /* code */
    printf("\n\nXXXXXXXXXXXXXXXXX- Exercicio 05 -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("Digite o nome do vendedor: ");
    scanf("%s", &vendedor[i]);
    printf("Digite o Valor Total de Vendas do Vendedor:  %s \n ", vendedor[i]);
    printf("Digite o Valor Total: R$ ");
    scanf("%f", &totalvendasvendedor[i]);

    totalvendatodosvendendor += totalvendasvendedor[i];
    printf("\n\n vendas R$ %.2f", totalvendatodosvendendor);
    contvendas ++;
  }

  for (i = 0; i < 5; i++)
  {
    printf("\n\nXXXXXXXXXXXXXXXXX- Listagen dos Vendendores -XXXXXXXXXXXXXXXXXXXXXX\n");
    printf("XXXXXXXXXXXXXXXXX-:  Execucao %i\n", i);
    printf("\nVendedor: %s", vendedor[i]);
    printf("\nValor Produto: R$ %.2f", totalvendasvendedor[i]);
    comissao = totalvendasvendedor[i] * porcentagem;
    printf("\nComissao do vendedor: R$ %.2f", comissao);
    totalbruto = totalvendasvendedor[i] + comissao;
    printf("\nO Valor Bruto do a receber: R$ %.2f", totalbruto);

    if (totalvendasvendedor[i] > totalvendasmaior)
    {
      totalvendasmaior = totalvendasvendedor[i];
      strcpy(cvendedor, vendedor[i]);
      
    }

  }

  mediavenda = totalvendatodosvendendor / contvendas;

  for (i = 0; i < 5; i++)
  {
    /* code */
    if (totalvendasvendedor[i] > mediavenda)
    {
      contmaiormedia++;
    }
  }

  printf("\n\n\n\nXXXXXXXXXXXXXXXXX- Exercicio 05 -XXXXXXXXXXXXXXXXXXXXXX\n");
  printf("\nO total (bruto) vendido pelos 5 vendedores: %.2f\n", totalvendatodosvendendor);
  printf("\nA media do total de vendas (valor bruto vendido por cada vendedor) %.2f\n", mediavenda);
  printf("\nA quantidade de vendedores que venderam acima da media das vendas %i\n", contmaiormedia);
  printf("\n\nO maior valor de comissao e o nome do vendedor que recebeu: ");
  printf("\nO Vendedor: %s", cvendedor );
  printf("\nO maior valor: %.2f", totalvendasmaior);

  printf("\n\nXXXXXXXXXXXXXXXXX- Programa Finalaizado -XXXXXXXXXXXXXXXXXXXXXX\n");

  return 0;
}