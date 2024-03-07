#include <stdio.h>
int main(){
 float preco_inicial = 100.0f ;

 const float ICMS = 0.17f;
 const float COFINS = 0.076f;
 const float PIS_PASEP = 0.0165f;

 float valor_icms = ICMS * preco_inicial;
 float valor_cofins = COFINS * preco_inicial;
 float valor_pis_pasep = PIS_PASEP * preco_inicial;
   
 float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("Preço inicial = %.2f\n", preco_inicial);
  printf("Valor ICMS = %.2f\n", valor_icms);
  printf("Valor COFINS = %.2f\n", valor_cofins);
  printf("Valor PIS/PASEP = %.2f\n", valor_pis_pasep);
  printf("Preço final = %.2f\n", preco_final);

  return 0;
}