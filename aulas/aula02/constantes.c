#include <stdio.h>

#define SEXO_FEMININO 2

int main(){
 const float PI = 3.14;

  PI = 3.1415; // erro, pois PI é uma constante.

  const int SEXO_MASCULINO = 1;
  int sexo = SEXO=MASCULINO;

  return 0;
}