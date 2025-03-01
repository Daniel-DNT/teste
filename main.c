#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  float base;
  float altura;
  float area;

  printf("digite a base do triangulo retangulo(em metros quadrados) \n");
  scanf("%f", &base);
  printf("digite a altura do trangulo retangulo(em metros quadrados) \n");
  scanf("%f", &altura);
  area = ((base*altura)/2); 
  printf("a area do trangulo retangulo em %.2fmetros quadrados \n", area);
  /* o "&" serve para mostrar o endereço da memoria, o local exato onde o valor da variavel esta guardado na memoria */

  return 0;
}