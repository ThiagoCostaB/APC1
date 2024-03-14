#include <stdio.h>
int main(){
float valor_da_hora_de_trabalho = 150.00f;
float total_de_horas_trabalhadas = 100.00f;
  
const float IR = 0.25f;
const float INSS = 0.11f;

float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
float imposto_de_renda = salario_bruto  * IR;
float imposto_previ = salario_bruto * INSS;
float salario_liquido = salario_bruto - imposto_de_renda - imposto_previ;

printf("\x1b[32m-------------------------------\n");
printf("    C O N T R A C H E Q U E    \n");
printf("-------------------------------\x1b[0m\n");
printf("\x1b[35m Salario Bruto.....:\x1b[0m R$ %7.2f\n", salario_bruto);
printf("\x1b[35m Imposto de Renda..:\x1b[0m R$ %7.2f\n", imposto_de_renda);
printf("\x1b[35m Imposto Previ.....:\x1b[0m R$ %7.2f\n", imposto_previ);
printf("\x1b[35m Salario Liquido...:\x1b[0m R$ %7.2f\n", salario_liquido);
  
  return 0;
}