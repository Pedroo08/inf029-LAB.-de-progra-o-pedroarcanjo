#include <stdio.h>
 typedef struct {
  
  int n1;
  int n2;
  int n3;
  int n4;
  
}numeros;

numeros ler4Numeros(numeros ns){
  
  
  printf("Digite um número: ");
  scanf("%d",&ns.n1);

  printf("Digite um número: ");
  scanf("%d",&ns.n2);

  printf("Digite um número: ");
  scanf("%d",&ns.n3);

  printf("Digite um número: ");
  scanf("%d",&ns.n4);

  return (ns);
      
}

int main(void) {
  numeros nums;
  int i;

  nums = ler4Numeros(nums);
  printf("%d ",nums.n1);
  printf("%d ",nums.n2);
  printf("%d ",nums.n3);
  printf("%d ",nums.n4);
  return 0;
}