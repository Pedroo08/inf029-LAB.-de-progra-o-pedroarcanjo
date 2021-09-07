#include <stdio.h>


int venda(int p1){
  if( p1 > 0){
    int qtd;
    printf("Quantos seram vendidos?:\n");
    scanf("%d",&qtd); 
    p1-= qtd;
  }else{
    printf("Estoque vazio \n");
    printf("\n");
  }
  return(p1);
}