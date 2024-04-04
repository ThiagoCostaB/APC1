#include <stdio.h>
#include <math.h>
int main(){
int x1;
int y1;
int x2;
int y2;

  printf("Digite o x da primeira coordenada do ponto: ");
  scanf("%i", &x1);
  printf("Digite o y da primeira coordenada do ponto: ");
  scanf("%i", &y1);

  printf("Digite o x da segunda coordenada do ponto: ");
  scanf("%i", &x2);
  printf("Digite o y da segunda coordenada do ponto: ");
  scanf("%i", &y2);

int distancia = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));

  printf("A distancia entre os pontos é: %i\n", distancia);

  return 0;
}