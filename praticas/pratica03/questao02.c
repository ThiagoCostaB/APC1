#include <stdio.h>
int main(){
float preco;
  printf("Digite o preço do produto: $");
int deu_certo = scanf("%f",&preco);

if(deu_certo && preco >=0.0f){
if(preco >= 0.0 && preco <= 100.0){
float desconto = preco * 0.01;
float preco_novo = preco - desconto;
  printf("O valor ficou: $%.2f\n", preco_novo);
  printf("Teve $%.2f de desconto\n", desconto);
} else if(preco >= 100.01 && preco <= 500.0){
float desconto = preco * 0.05;
float preco_novo = preco - desconto;
  printf("O valor ficou: $%.2f\n", preco_novo);
  printf("Teve $%.2f de desconto\n", desconto);
} else if(preco > 500.0){
  float desconto = preco * 0.1;
  float preco_novo = preco - desconto;
  printf("O valor ficou: $%.2f\n", preco_novo);
  printf("Teve $%.2f de desconto\n", desconto);
}}else {
  printf("Valor invalido. Tente Novamente!\n");
}

  return 0;
}