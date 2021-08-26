#include <stdio.h>

int main(void) {
int soma,subtracao,divisão,multiplicacao,resultado;
int a,b,vericador;


printf("Digite o primeiro valor: ");
scanf("%d",&a);
printf("Digite o segundo valor: ");
scanf("%d",&b);


printf(" Digite:[0]sair\n[1]Soma\n[2]subtração \n[3]Multiplicação \n[4]Divisão\n");
scanf("%d",&vericador);

switch(vericador){
    case 1:
      resultado = a + b;
      printf("O resultado da soma é %d",resultado);
      break;

    case 2:
      resultado = a - b;
      printf("O resultado da subtração é %d",resultado);
      break;

    case 3:
      resultado = a - b;
      printf("O resultado da multiplicação  é %d",resultado);
      break; 

    case 4:
      resultado = a / b;
      printf("O resultado da divisão é %d",resultado);
      break;
    
    default :
    printf ("Valor invalido!\n");
  }
  return 0;
}