#include <stdio.h>
int main(){
int raio;
const float PI = 3.1416;

  printf("Vamos calcular o perímetro de uma pizza!!!=)\n");
  printf("Digite o raio da pizza: ", raio);
  scanf("%i", &raio);

float perimetro = 2 * PI * raio;

  printf("O perímetro da pizza é :%.2f\n", perimetro);

  return 0;
}