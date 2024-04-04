#include <stdio.h>
int main(){
int peso;
int altura;
  printf("Digite seu peso: ");
  scanf("%i", &peso);
  printf("Digite sua altura: ");
  scanf("%i", &altura);

int imc = (altura * altura) / peso;

printf("Seu indice de massa corporal é: %i\n", imc);

  return 0;
}