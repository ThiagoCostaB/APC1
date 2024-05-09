#include <stdio.h>
int main(){
int opcao;
  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar o Saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar Recados\n");
  printf("4 - Ligações Feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1: printf("Seu saldo é R$10.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com o valor da recarga: $");
      deu_certo = scanf("%f", &valor);
      printf("Recarga realizada com sucesso!\n");break;
    }
    case 3: printf("Você não tem recados!\n"); break;
    case 4: printf("619999999\n61123456789\n6193426349\n6140828922\n"); break;
    case 0: printf("Até logo\n");
    default: printf("Opção Inválida! Tente Novamente!\n ");
  }
    
  return 0;
}