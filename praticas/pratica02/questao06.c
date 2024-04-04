#include <stdio.h>
int main(){
float valor;
int fabricacao;
int depreciacao;

  printf("Digite o valor do veiculo: ");
  scanf("%f", &valor);
  
  printf("Digite o ano de fabricaçao do veiculo: ");
  scanf("%i", &fabricacao);
  
  printf("Digite o ano de depreciaçao: ");
  scanf("%i", &depreciacao);

float valor_depreciacao = (depreciacao - fabricacao) * 0.01 * valor;

  printf("Esse é o valor da depreciaçao: %f\n", valor_depreciacao);


  return 0;
}