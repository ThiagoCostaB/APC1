#include <stdio.h>
int main(){
int n1, n2, n3;

  printf("Digite o primeiro numero:\n");
  scanf("%i", &n1);
  printf("Digite o segundo numero:\n");
  scanf("%i", &n2);
  printf("Digite o terceiro numero:\n");
  scanf("%i", &n3);

float media = (n1 + n2 + n3) / 3 ;

  printf("A média aritmética é: %.2f\n", media);

  return 0;
}