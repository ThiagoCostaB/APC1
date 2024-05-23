#include <stdio.h>
#include <stdlib.h>

int main(){
int opcao = 0;
while(opcao != 4){
  int deu_certo = system("clear");
    printf("---MEU JOGO---\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver Rank\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("---------------\n");
    printf("Escolha uma opção => ");
    
   deu_certo = scanf("%i", &opcao);
  while(getchar() !='\n');// limpar buffer do teclado
    if(!deu_certo) {
      opcao = 0;
    }
    switch(opcao) {
      case 1: {
        char nome[31];
        deu_certo = system("clear");
        printf("Qual o seu nome? ");
        deu_certo = scanf("%[^\n]s", nome);
        while(getchar() != '\n');
        printf("Ola %s!\n", nome);
        printf("Pressione ENTER para iniciar...");
        getchar();
        break;
      }
      case 2: {
        deu_certo = system("clear");
        printf("Ranking - top 5\n");
        printf("1º lugar: Jose  -  1000 pontos\n");
        printf("2º lugar: Maria -  800 pontos\n");
        printf("3º lugar: Bia   -  700 pontos\n");
        printf("4º lugar: Pedro -  500 pontos\n");
        printf("5º lugar: Joao  -  200 pontos\n");
        printf("Pressione ENTER para voltar...");
        getchar();
        break;
      }
      case 3: 
        break;
      case 4: printf("Ate logo! ;)\n"); 
        break;
      default: printf("Opção inválida! Pressione ENTER para prosseguir...");
      getchar();
    }
}

return 0;
}