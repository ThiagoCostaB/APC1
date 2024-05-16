#include <stdio.h>
int main(){
int numero;
  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);
  int numero_valido = numero > 0 && numero < 101;

if(deu_certo && numero_valido){
  for (int i= 1; i<=100 ; i++){
    if(i % numero == 0){
      printf("%i, ", i);
    }
  }
} else{
  printf("Numero Invalido. Tente Novamente!\n");
}

  return 0;
}