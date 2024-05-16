#include <stdio.h>
int main(){
int numero;
  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);
  
 if( deu_certo && numero >= 0){
   long int resultado = 1;
   printf("%i! = ", numero);
  for(int i = numero; i > 1; i--){
   resultado = resultado * i;
    printf("%i X ", i);
  }
   printf("1 = %li\n", resultado);
 } else{
   printf("Invalido. Tente Novamente!\n");
 }


  return 0;
}

