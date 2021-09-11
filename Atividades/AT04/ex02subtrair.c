#include <stdio.h>

float subtrair(a,b,c){
  int res;
  res = (a - b)-c;
  return(res);
}
int main(void) {
  float n1,n2,n3,resultado;

  printf("Digite um número: ");
  scanf("%f",&n1);
  printf("Digite um número: ");
  scanf("%f",&n2);
  printf("Digite um número: ");
  scanf("%f",&n3);

  resultado = subtrair(n1,n2,n3);
  printf("O resultado é %.2f \n",resultado);


  return 0;
}