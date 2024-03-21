#include <stdio.h>
int main (){
 char  nome[31];
 int quantidade;
 float valor;

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);
  
  printf("Digite a quantidade: ");
  deu_certo = scanf("%i", &quantidade);
  
  printf("Qual o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  float total = quantidade * valor ;

  printf("\x1b[32m--------------------------\n");
  printf("    N O T A  L E G A L    \n");
  printf("--------------------------\x1b[0m\n");
  printf("\x1b[35mITEM           QTD VALOR \x1b[0m\n");
  printf("\x1b[36m%-13s\x1b[0m %3i %7.2f\n", nome, quantidade, valor); 
  printf("\x1b[32m--------------------------\n");
  printf("TOTAL........:\x1b[0m R$ %8.2f      \n", total);
  

  return 0;
}