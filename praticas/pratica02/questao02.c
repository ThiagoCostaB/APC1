#include <stdio.h>
int main(){
int n1;
int n2;
 printf("Digite o primeiro numero:\n");
  scanf("%i", &n1);
 printf("Digite o segundo numeor:\n");
  scanf("%i", &n2);

float resultado = 1.0f * n1 / n2 ;
int resto = n1 % n2 ;

  printf("O resultado da divisao é:%i\n", resultado);
  printf("O resto é:%i\n", resto);

  return 0;
}