#include <stdio.h>
int main(){
float nota1;
float nota2;

  printf("Digite a nota da P1: \n");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;
  if(nota1_eh_valida){
    printf("Digite a nota da P2: \n");
    deu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0.0f && nota2 <=10.0f;
    if(nota2_eh_valida){
      float media = 0.4f * nota1 + 0.6f * nota2;
       printf("A sua media é %.1f\n", media);

      int media_passou = media > 5.0f;
      if(media_passou){
        printf("\x1b[32m Aprovado! Partiu ferias\n \x1b[0m");
      }else{
        printf("\x1b[31m Reprovado! Partiu P3\n \x1b[0m");
      }
    }else{
      printf("\x1b[31m Nota invalida! Entre com um valor entre 0.0 e 10.0\n \x1b[0m");
    }
  }else{
    printf("\x1b[31m Nota invalida! Entre com um valor entre 0.0 e 10.0\n \x1b[0m");
  }

  return 0;
}