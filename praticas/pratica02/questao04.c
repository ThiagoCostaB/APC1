#include <stdio.h>
int main(){
int largura;
int comprimento;
  printf("Digite a largura do terreno: ");
  scanf("%i", &largura);
  printf("Digite o comprimento do terreno: ");
  scanf("%i", &comprimento);

int metros_quadrados = largura * comprimento;

int hectares = metros_quadrados / 10000;

  printf("A area em hectares é: %i\n", hectares);

  return 0;
}