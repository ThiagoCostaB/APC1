#include <stdio.h>

int main(){
 char caracter;// 'A' '1' '\n' '\\' 1byte -128 a 127
 int inteiro;// -15, 0, +15         4 bytes -2bi a 2bi
 float decimal_com_6casas;// 0.00000.1  4 bytes -3.4e38 a 3.4e38
 double decimal_com_15casas;// 0.0000000000000001 8 bytes -1.8e308 a 1.8e308
 void sem_valor;// NULL
 //nao existe string, mas C aceita "uma frase qualque" 

/* -------comandos para usar no shell-------
  cd nome_da_pasta        =(abrir pastas),
  ls                      =(para ver aquivor dentro das pastas),
  gcc nome_do_aquivo -lm  =(para compilar),
  ./a.out                 =(para rodar o programa);
  cd ..                   =(para voltar uma pasta).*/
  
  return 0;
}