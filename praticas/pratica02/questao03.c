#include <stdio.h>
int main(){
int celsius;

  printf("Digite a quantidade de graus em Celsius:");
  scanf("%i", &celsius);

int graus = (celsius * 9/5)+ 32;

  printf("Essa quantidade em Fahrenheit é: %i\n", graus);

  return 0;
}