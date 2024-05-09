#include <stdio.h>
int main(){
int avaliacao;

  printf("----Avaliação da corrida----\n");
  printf("[1]pessimo\n[2]ruim\n[3]medio\n[4]bom\n[5]exelente\n");
  printf("Digite a avaliação do motorista:");
  int deu_certo = scanf("%i", &avaliacao);

if (avaliacao == 1){
  printf("[1]pessimo\nO motorista ganhou *\n");
}else if(avaliacao == 2){
  printf("[2]ruim\nO motorista ganhou **\n");
}else if(avaliacao == 3){
  printf("[3]medio\nO motorista ganhou ***\n");
}else if(avaliacao == 4){
  printf("[4]boa\nO motorista ganhou ****\n");
}else if(avaliacao == 5){
  printf("[5]exelente\nO motorista ganhou *****\n");
}else {
  printf("Avaliação inválida!. Tente Novamente!\n");
}

  return 0;
}