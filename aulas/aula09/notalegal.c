#include <stdio.h>

int main(){
  
 enum unidade_e { //agrupamneto de constantes
  unidade,
  caixa,
  peso
  lata
};
  
  struct produto_t{ // agrupamento de variaveis.
  char nome[31];
  int quantidade;
  int unidade;// 0-und, 1-caixa, 2-peso, 3-lata.
  float preco;
  float valor;
};
  float total = 0.0f;
  
  struct produto_t produto[5];
  
  for(int i=0; i<5; i++){

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%s", produto[i].nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &produto[i].quantidade);

  printf("Entre com a unidade do produto\n");
  printf("0-unidade\n1-caixa\n2-peso\n3-lata\n==> ");
  deu_certo = scanf("%i", &produto[i].unidade);

  printf("Entre com o preço do produto: ");
  deu_certo = scanf("%f", &produto[i].preco);

  produto[i].valor = produto[i].preco * produto[i].quantidade;
  total = total + produto[i].valor;
    
  }
  printf("--------------------------------------\n");
  printf("\n          NOTA LEGAL\n");
  printf("--------------------------------------\n");
  printf("Item       Qntd  Und   Preço  Valor\n");
  for(int i=0; i<5; i++){
  printf("%-10s %05i", produto[i].nome, produto[i].quantidade);
  
    switch(produto[i].unidade){
    case unidade: printf(" UN "); break;
    case caixa: printf(" CX "); break;
    case peso: printf(" KG "); break;
    case lata: printf(" LT "); break;
  }
  printf("%8.2f %7.2f\n", produto[i].preco, produto[i].valor);
  }
  printf("TOTAL.....................: R$%10.2f\n", total);

  
  return 0;
}