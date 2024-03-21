#include <stdio.h>
int main(){
long int gb;

  printf("Digite o valor de GB:");
  scanf("%li", &gb);

long int byte = gb * 1024 * 1024 * 1024 ;

  printf("Voce tem %li de bytes\n", byte);

  return 0 ;
}