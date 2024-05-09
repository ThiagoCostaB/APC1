#include <stdio.h>
int main(){
int nota;
  printf("---Avaliação do Professor---\n");
  printf("[1]Ruim\n[2]Insuficiente\n[3]Suficiente\n[4]Bom\n[5]Otimo\n");
  printf("Digite sua avaliação para o professor: ");
  scanf("%i",&nota);

  switch(nota){
    case 1: printf("Você avaliou o professor como ruim\n"); break;
    case 2: printf("Você avaliou o professor como insuficiente\n"); break;
    case 3: printf("Você avaliou o professor como suficiente\n"); break;
    case 4: printf("Você avaliou o professor como bom\n"); break;
    case 5: printf("Você avaliou o professor como otimo\n"); break;
    default: printf("Avaliação Inválida! Tente Novamente!\n");
  }

  return 0;
}