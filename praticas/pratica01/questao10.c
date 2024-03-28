#include <stdio.h>

int main(){
int numero;
  
  printf("Digite um numero qualquer:");
  scanf("%i", &numero);

int milhar = numero / 1000;
int centena = numero % 1000;
centena = centena / 100;
int dezena = centena % 100;
dezena = dezena / 10;
int unidade = dezena % 10;

  printf("Esse numero tem milhar:%i centena:%i dezena:%i unidade:%i\n", milhar, centena, dezena, unidade);


  return 0;
}