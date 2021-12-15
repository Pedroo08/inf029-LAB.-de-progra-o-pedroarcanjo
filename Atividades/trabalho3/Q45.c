#include <stdio.h>

int somaDigitos(int n,int soma){

  if(n % 10 == n)
    return  soma += n;
  
  else 
    return somaDigitos(n/10,soma += n%10);
}

int main(void) {
  printf("%d\n",somaDigitos(123,0));
  printf("%d\n",somaDigitos(3,0));
  printf("%d\n",somaDigitos(1111111111,0));
  return 0;
}