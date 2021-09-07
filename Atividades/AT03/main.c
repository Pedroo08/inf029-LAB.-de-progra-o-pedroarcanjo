#include <stdio.h>
#include "estoque.h" //incluindo o outro arquivo
#include "venda.h"
int main(void) {

  int direcao;
  int produtos = 10;
  
  while(direcao != 999){
  printf(".....Painel.......\n");
  printf("Venda...[1]\n");
  printf("Estoque.[2]\n");
  printf("Encerrar[999]\n");
  printf("...................\n");
  printf("\n");

  printf("Escolha uma ação:\n");
  scanf("%d",&direcao); 

    switch(direcao){
      case 1:
      produtos = venda(produtos);
      break;

      case 2 :
      estoque(produtos);//chamando a função do arquivo estoque(normal)
      break;

      case 999:
      printf("Encerrado");
      break;

      default :
      printf ("Valor invalido!\n");
      }
   //chamando a função do arquivo estoque(normal)
  }
  return 0;
}