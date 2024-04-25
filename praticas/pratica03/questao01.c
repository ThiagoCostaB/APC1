#include <stdio.h>
int main(){
int x;
  printf("Digite um numero:");
  int deu_certo = scanf("%i", &x);
 if(deu_certo){
int par = x % 2 == 0;
  
  if(par){
  printf("O numero que você digitou é par \n");
  }else{
  printf("O numero que você digitou é impar \n");
}
 }else{
   printf("Numero invalido!\n");
 }
  return 0;
}