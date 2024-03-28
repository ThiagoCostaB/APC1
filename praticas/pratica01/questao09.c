#include <stdio.h>

int main(){
int anos;
int meses; 
int dias;

  printf("Digite sua idade expressando anos, meses e dias\n");
  printf("Digite os anos:\n");
  scanf("%i", &anos);
  printf("Digite os meses:\n");
  scanf("%i", &meses);
  printf("Digite os dias:\n");
  scanf("%i", &dias);

  int total = (anos * 365) + (meses *30) + dias;

  printf("Você tem %i dias de vida\n", total);

  return 0;
}