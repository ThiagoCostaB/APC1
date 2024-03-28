#include <stdio.h>

int main(){
int segundo;

printf("Digite o tempo em segundos:\n");
scanf("%i", &segundo);

int horas = segundo / 3600;
int resto = segundo % 3600;
int minutos = resto / 60;
resto = resto % 60;

  printf("Esse valor corresponde a %i horas %i minutos %i segundos\n", horas, minutos, resto);

  return 0;
}