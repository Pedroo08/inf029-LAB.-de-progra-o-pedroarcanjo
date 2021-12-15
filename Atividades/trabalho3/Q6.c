#include <stdio.h>


int pot(int k, int n){
    if(n == 0)
      return 1;
    else
      return k * pot(k,n-1);
}


int main(void) {
  int k,n,r;

  printf("Digite a base(k): ");
  scanf("%d",&k);

  printf("Digite o expoente(n): ");
  scanf("%d",&n);
printf("%d",pot(k,n));
  return 0;
}