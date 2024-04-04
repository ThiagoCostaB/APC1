#include <stdio.h>
int main(){
int x;
  
  printf("Digite um numero: ");
  scanf("%i", &x);

int r0 = x * 0;
int r1 = x * 1;
int r2 = x * 2;
int r3 = x * 3;
int r4 = x * 4;
int r5 = x * 5;
int r6 = x * 6;
int r7 = x * 7;
int r8 = x * 8;
int r9 = x * 9;
int r10 = x * 10;

  printf("A tabuada de %i é:\n%i x 0 = %i\n", x, x, r0);
  printf("%i x 1 = %i\n", x, r1);
  printf("%i x 2 = %i\n", x, r2);
  printf("%i x 3 = %i\n", x, r3);
  printf("%i x 4 = %i\n", x, r4);
  printf("%i x 5 = %i\n", x, r5);
  printf("%i x 6 = %i\n", x, r6);
  printf("%i x 7 = %i\n", x, r7);
  printf("%i x 8 = %i\n", x, r8);
  printf("%i x 9 = %i\n", x, r9);
  printf("%i x 10 = %i\n", x, r10);

  return 0;

}