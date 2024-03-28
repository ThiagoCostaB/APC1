#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;
int c;

printf("Digite o a da equaçao de 2º grau:");
scanf("%i", &a);
printf("Digite o b da equaçao de 2º grau:");
scanf("%i", &b);
printf("Digite o c da equaçao de 2º grau");
scanf("%i", &c);

float delta = pow(b, 2) - 4 * a * c ;

float bhaskara1 = -b + sqrt(delta) / 2 * a;
float bhaskara2 = -b - sqrt(delta) / 2 * a;

printf("A primeira raiz é %f\n", bhaskara1);
printf("A segunda raiz é %f\n", bhaskara2);


  return 0;
}