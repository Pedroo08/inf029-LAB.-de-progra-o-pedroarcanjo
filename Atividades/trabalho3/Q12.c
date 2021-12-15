#include <stdio.h>




void  ordemCrescente (int n) {
   if (n >= 0) {
      ordemCrescente(n - 1);
      printf ( "%d\n", n);
   }
}



int main(void) {
  ordemCrescente(15);
  
  return 0;
}