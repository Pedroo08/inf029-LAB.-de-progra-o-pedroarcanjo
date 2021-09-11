#include <stdio.h>


float somar(float a,float b){
  int result;
  result= a + b;
  return (result);
}

int main(void) {
  float n1,n2,resultado;

  printf("Digite um número\n");
  scanf("%f",&n1);
  printf("Digite um número\n");
  scanf("%f",&n2);

  resultado = somar(n1,n2);
  
  printf("A soma entre %.2f e %.2f é %.2f",n1,n2,resultado);
  
  return 0;
}